#include <stdio.h>
#include "mymath.h"

int main() {
    int x = 3;
    int y = 4;
    printf("x + y = %d\n", add(x, y));
    printf("x^2 = %d\n", square(x));
    return 0;
}

