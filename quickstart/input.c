#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    double weight;
    char grade;
    char name[20];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight: ");
    scanf("%lf", &weight); // in scanf to decimal we use lf instead of f

    printf("Enter your grade: "); // A, B , C
    scanf("%c", &grade);
    printf("%c", grade);

    printf("Enter your name: ");
    fgets(name, 20, stdin); // gets an entire line of text, scanf gets just until the first whitespace (stdin param to tell that we willuse the console, the standard input)

    return 0;
}