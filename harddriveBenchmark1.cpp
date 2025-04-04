#include <time.h>
#include <iostream>
int main(){
    clock_t startTime; 
    startTime = clock();
    FILE * p = fopen("write.txt", "w");

    char array[100];
    for (int i = 0; i < 100; i++){
        array[i] = 'a';
    }

    for (long i = 0; i < 10e7; i++){
        fwrite(array, 1, 100, p);
    }
    fclose(p);
    FILE * p2 = std::fopen("write.txt", "r");    
    for (long i = 0; i < 10e7; i++){
        if (feof(p2)){
            fseek(p2, 0, SEEK_SET);
        }
        char array[100];
        fread(array, 1, 100, p2);
    }
    fclose(p2);
    double time = (clock() - startTime) / (CLOCKS_PER_SEC * 1.0); 
    std::cout << "Drive Operations(100 Bytes Each) take ~ " << time << "s\n";
    return 0;
}