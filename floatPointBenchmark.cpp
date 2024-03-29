#include <time.h>
#include <iostream>

int main() {
    // Measure start time
    clock_t startTime;
    startTime = clock();
    
    double a = 4.6;
    double b = 5.4;
    double result;
    for (long i = 0; i < 5e9; i++){
        result = a * b;
    }

    for (long i = 0; i < 10e9; i++){
        result = a + b;
    }