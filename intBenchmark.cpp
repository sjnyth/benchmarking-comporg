#include <time.h>
#include <iostream>

int main(){
    clock_t t;
    t = clock();
    int a = 4;
    int b = 5;
    int operationResult;

    for (long i = 0; i < 5e9; i++){
        operationResult = a * b;
    }
    for (long i = 0; i < 10e9; i++){
        operationResult = a + b;
    }
    for (long i = 0; i < 2e9; i++){
        operationResult = a / b;
    }
    double elapsedTimeInSeconds = (clock() - t) / (CLOCKS_PER_SEC * 1.0);
    std::cout << "Int Operations take ~ " << elapsedTimeInSeconds << "s\n";
    return 0;
}