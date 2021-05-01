#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 30;
    double weight = 76.2;
    char grade = 'A';

    printf("%p \n", &age); // prints the physical memory address of this variable converted to hexadecimal
    printf("%p \n", &weight);
    printf("%p \n", &grade);

    return 0;
}