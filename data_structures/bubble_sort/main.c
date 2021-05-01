#include <stdio.h>
#include "bubble_sort.h"
#include "bubble_sort.c"

int main() {
    int arr[25] = { -223, -12, -1000, -90, -3, 
        40, 55, 11, 32, 67, 5, 74, 
        89, 38, 66, 27, 36, 79, 99, 
        2, 0, 1, 100, 282, 370};

    int arr_length = sizeof arr / sizeof *arr;

    run(arr, arr_length);
    return 0;
}