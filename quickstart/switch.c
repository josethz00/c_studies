#include <stdio.h>
#include <stdlib.h>

int main() {
    char grade = 'A';

    switch(grade) {
        case 'A':
            printf("Você passou com nota máxima!");
            break;
        case 'B':
            printf("Você passou com uma boa nota");
            break;
        case 'C':
            printf("Você passou na média");
            break;
        case 'D':
            printf("Você está de recuperação");
            break;
        case 'E':
            printf("Você reprovou");
            break;
        default:
            printf("Essa nota inválida");
    }

    return 0;
}