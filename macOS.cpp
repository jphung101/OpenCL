//This file is an attempt to get OpenCL working on an ARM Mac (specifically M1)
#include <iostream>
#include <OpenCL/cl.h>
#include <time.h> // for timing

using namespace std;

int main(){
    clock_t start, end;
    double time;
    int size = 1000000;
    int arr[1000000] = {0};
    start = clock();

    
    for(int i = 0; i < size; i++){
        arr[i]++;
    }

    end = clock();
    time = ((double) (end - start)) / CLOCKS_PER_SEC * 1000; // Convert to milliseconds
    printf("%f", time);

}