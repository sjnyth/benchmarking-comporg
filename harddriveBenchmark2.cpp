#include <time.h>
#include <iostream>

int main() {
    clock_t startTime;
    startTime = clock();
    
    FILE* writeFile = fopen("write.txt", "w"); 
    char array[10000];
    for (int i = 0; i < 10000; i++) {
        array[i] = 'a';
    }
    
    for (long i = 0; i < 100000; i++) {
        fwrite(array, 1, 10000, writeFile);
    }
    fclose(writeFile);

    FILE* readFile = std::fopen("write.txt", "r");
    for (long i = 0; i < 100000; i++) {
        if (feof(readFile)) {
            fseek(readFile, 0, SEEK_SET);
        }
        char array[10000];
        fread(array, 1, 10000, readFile);
    }
    fclose(readFile);
    
    double elapsedTime = (clock() - startTime) / (CLOCKS_PER_SEC * 1.0); // Renamed variable time to elapsedTime
    std::cout << "Drive Operations(10000 Bytes Each) take ~ " << elapsedTime << "s\n";

    return 0;
}