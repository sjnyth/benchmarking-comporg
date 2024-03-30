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