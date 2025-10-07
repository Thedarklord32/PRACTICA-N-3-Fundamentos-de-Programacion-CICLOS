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

    printf("Ingrese el valor de x (n�mero real): ");
    scanf("%lf", &x);

    printf("Ingrese el valor de n (n�mero impar positivo): ");
    scanf("%d", &n);

    if (n <= 0 || n % 2 == 0) {
        printf("Error: n debe ser un n�mero impar positivo.\n");
        return 1;
    }

    for (int i = 1; i <= n; i += 2) {
        double termino = pow(x, i) / factorial(i);

        if (((i + 1) / 2) % 2 == 0) {
            suma -= termino;
        } else {
            suma += termino;
        }
    }

    printf("La suma de la serie para x = %.2f y n = %d es: %.10f\n", x, n, suma);

    return 0;
}
