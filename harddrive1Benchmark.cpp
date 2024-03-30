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

    for (long i = 0; i < 10e9; i++){
        fwrite(array, 1, 100, p);
    }
    fclose(p);
    FILE * p2 = std::fopen("read.txt", "r");    
    for (long i = 0; i < 10e9; i++){
        if (feof(p2)){
            fseek(p2, 0, SEEK_SET);
        }
        char array[100];
        fread(array, 1, 100, p2);
    }
