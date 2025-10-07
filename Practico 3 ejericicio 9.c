#include <stdio.h>
#include <math.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    double x, suma = 0;
    int n;

    printf("Ingrese el valor de x (número real): ");
    scanf("%lf", &x);

    printf("Ingrese el valor de n (entero positivo): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: n debe ser un número positivo.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        double termino = pow(x, i) / factorial(i);

        if (i % 2 == 0) {
            suma -= termino;
        } else {
            suma += termino;
        }
    }

    printf("La suma de la serie alternada para x = %.2f y n = %d es: %.10f\n", x, n, suma);

    return 0;
}
