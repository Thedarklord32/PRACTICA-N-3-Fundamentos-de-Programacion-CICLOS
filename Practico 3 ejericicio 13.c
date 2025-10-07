#include <stdio.h>

int main() {
    printf("=== TABLA DE SUMAR (1-10) ===\n\n");

    for (int i = 1; i <= 10; i++) {
        printf("%2d + 1 = %2d\n", i, i + 1);
        printf("%2d + 2 = %2d\n", i, i + 2);
        printf("%2d + 3 = %2d\n", i, i + 3);
        printf("%2d + 4 = %2d\n", i, i + 4);
        printf("%2d + 5 = %2d\n", i, i + 5);
        printf("%2d + 6 = %2d\n", i, i + 6);
        printf("%2d + 7 = %2d\n", i, i + 7);
        printf("%2d + 8 = %2d\n", i, i + 8);
        printf("%2d + 9 = %2d\n", i, i + 9);
        printf("%2d + 10 = %2d\n\n", i, i + 10);
    }

    return 0;
}
