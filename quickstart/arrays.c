#include <stdio.h>
#include <stdlib.h>

int main() {
    int luckyNumbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    luckyNumbers[1] = 514; 

    int nestedArray[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    printf("%d", luckyNumbers[0]);

    return 0; 
}