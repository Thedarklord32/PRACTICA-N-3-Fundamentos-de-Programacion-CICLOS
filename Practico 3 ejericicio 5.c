#include <stdio.h>

int main() {
    int N;
    long long producto = 1;

    printf("Ingrese el valor de N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Error: N debe ser un número no negativo.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        producto *= i;
    }

    printf("El producto de los números del 1 al %d es: %lld\n", N, producto);

    return 0;
}
