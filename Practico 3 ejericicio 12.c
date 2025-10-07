#include <stdio.h>

int main() {
    int a, b, temp;
    int original_a, original_b;

    printf("Ingrese el primer n�mero (a): ");
    scanf("%d", &a);

    printf("Ingrese el segundo n�mero (b): ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Error: ambos n�meros deben ser positivos.\n");
        return 1;
    }

    original_a = a;
    original_b = b;

    int mcd, mcm;
    int num1 = a, num2 = b;

    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    mcd = num1;

    mcm = (original_a * original_b) / mcd;

    printf("\nResultados:\n");
    printf("MCD(%d, %d) = %d\n", original_a, original_b, mcd);
    printf("MCM(%d, %d) = %d\n", original_a, original_b, mcm);
    printf("Verificaci�n: %d * %d = %d * %d = %d\n",
           original_a, original_b, mcd, mcm, original_a * original_b);

    return 0;
}
