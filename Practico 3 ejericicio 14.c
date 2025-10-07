#include <stdio.h>

int main() {
    int n;
    long long fib0, fib1, fibn;

    printf("Ingrese el valor de n (n >= 0): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: n debe ser un número no negativo.\n");
        return 1;
    }

    if (n == 0 || n == 1) {
        fibn = 1;
    } else {
        fib0 = 1;  // F0
        fib1 = 1;  // F1

        for (int i = 2; i <= n; i++) {
            fibn = fib1 + fib0;
            fib0 = fib1;
            fib1 = fibn;
        }
    }

    printf("F(%d) = %lld\n", n, fibn);

    return 0;
}
