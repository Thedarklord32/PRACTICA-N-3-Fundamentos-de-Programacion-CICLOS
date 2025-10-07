#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Ingrese el primer n�mero (a): ");
    scanf("%d", &a);

    printf("Ingrese el segundo n�mero (b): ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Error: ambos n�meros deben ser positivos.\n");
        return 1;
    }

    int original_a = a;
    int original_b = b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("El MCD de %d y %d es: %d\n", original_a, original_b, a);

    return 0;
}
