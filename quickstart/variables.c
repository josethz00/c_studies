#include <stdio.h>
#include <stdlib.h>

// %s string
// %d integers
// %f decimal numbers (float and double)

int main() {
    char characterName[] = "John";
    int characterAge = 35;

    printf("There once was a man named %s\n", characterName);
    printf("He was %d years old and his weight was %f kg. \n", characterAge, 76.8);
    printf("He really liked the name %s \n", characterName);
    printf("but did not like being %d. \n", characterAge);
    
    return 0;
}