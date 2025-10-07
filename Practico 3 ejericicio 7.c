#include <stdio.h>

int main() {
    int N;
    long long factorial = 1;

    printf("Ingrese un número entero no negativo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Error: El factorial no está definido para números negativos.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }

    printf("%d! = %lld\n", N, factorial);

    return 0;
}
