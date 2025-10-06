#include <stdio.h>

int main() {
    int N, suma = 0;

    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Error: N debe ser un número positivo.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            suma -= i;
        } else {
            suma += i;
        }
    }

    printf("La suma alternada 1 - 2 + 3 - 4 + ... ± %d es: %d\n", N, suma);

    return 0;
}
