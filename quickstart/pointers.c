#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 30; // common variable
    int *pAge = &age // pointer variable (stores the memory address of an existing variable) 

    double weight = 76.2; // common variable
    double *pWeight = &weight; // pointer variable (stores the memory address of an existing variable)

    char grade = 'A'; // common variable
    char *aGrade = &grade; // pointer variable (stores the memory address of an existing variable)

    printf("%p \n", &age); // this is a pointer of a variable
    printf("%p \n", pAge);

    // ---------------- DEREFERENCING POINTERS -----------------
    printf("%d \n", *pAge); // shows the value contained in the pointer (memory address)

    return 0;
}