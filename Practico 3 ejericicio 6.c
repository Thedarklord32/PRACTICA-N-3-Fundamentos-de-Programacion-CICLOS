#include <stdio.h>
#include <math.h>

int main() {
    double x, suma = 0;
    int n;

    printf("Ingrese el valor de x (numero real): ");
    scanf("%lf", &x);

    printf("Ingrese el valor de n (entero positivo): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: n debe ser un numero positivo.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        double termino = pow(x, i);  // Calcular x^i
        suma += termino;
    }

    printf("La suma de la serie x^1 + x^2 + ... + x^%d para x = %.2f es: %.6f\n", n, x, suma);

    return 0;
}
