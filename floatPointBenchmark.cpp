#include <time.h>
#include <iostream>

int main() {
    // Measure start time
    clock_t startTime;
    startTime = clock();
    
    double a = 4.6;
    double b = 5.4;
    double result;
    // Perform multiplication operation
    for (long i = 0; i < 5e9; i++){
        result = a * b;
    }
    // Perform addition operation
    for (long i = 0; i < 10e9; i++){
        result = a + b;
    }
    // Perform division operation
    for (long i = 0; i < 2e9; i++) {
        result = a / b;
    }

    // Calculate elapsed time
    double elapsedTimeInSeconds = (clock() - startTime) / static_cast<double>(CLOCKS_PER_SEC);

    // Print the result
    std::cout << "Double Operations take ~ " << elapsedTimeInSeconds << "s\n";
    return 0;
}