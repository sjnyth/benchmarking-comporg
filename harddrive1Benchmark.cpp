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
