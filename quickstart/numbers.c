#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("%f", 8.9 + 7.1);
    printf("%f", 5 + 7.1); // returns decimal
    printf("%f", 8 + 1); // returns integer

    printf("%f", pow(8, 2));

    printf("%f", ceil(8.2222)); // rounds up

    printf("%f", round(8.2222)); // rounds down

    return 0;

}