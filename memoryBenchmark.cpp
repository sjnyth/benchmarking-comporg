#include <time.h>
#include <iostream>
int main(){
    clock_t t;
    startTime = clock();
    // Perform memory read operations
    for (int i = 0; i < 5e9; i++){
        int readList[100]{0};
        int readValue;
        int readIndex = 0;
        while (readIndex < 100) {
            readValue = readList[readIndex];
            ++readIndex;
        }
    }
    // Perform memory write operations
    for (int i = 0; i < 5e9; i++) {
        int writeList[100];
        int writeIndex = 0;
        while (writeIndex < 100) {
            writeList[writeIndex] = 100;
            ++writeIndex;
        }
    }
