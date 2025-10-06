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
        suma += i * i;  // Sumar el cuadrado de cada número
    }

    printf("La suma de los cuadrados del 1 al %d es: %d\n", N, suma);

    return 0;
}
