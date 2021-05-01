#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    char job[50];
    int age;
    double weight;
};

int main() {

    struct Student student1;
    student1.age = 17;
    student1.weight = 76.2;
    strcpy(student1.name, "José Thomaz");
    strcpy(student1.job, "Software developer");

    return 0;
}