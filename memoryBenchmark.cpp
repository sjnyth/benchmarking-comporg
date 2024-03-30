#include <time.h>
#include <iostream>
int main(){
    clock_t startTime = clock();
    // Perform memory read operations
    for (int i = 0; i < 5e7; i++){
        int readList[100]{0};
        int readValue;
        int readIndex = 0;
        while (readIndex < 100) {
            readValue = readList[readIndex];
            ++readIndex;
        }
    }
    // Perform memory write operations
    // int size is 4 bytes in mac
    for (int i = 0; i < 5e7; i++) {
        int writeList[100];
        int writeIndex = 0;
        while (writeIndex < 100) {
            writeList[writeIndex] = 100;
            ++writeIndex;
        }
    }
    double executionTime = (clock() - startTime) / (CLOCKS_PER_SEC * 1.0);
    std::cout << "Memory Operations take ~ " << executionTime << "s\n";

    return 0;
}