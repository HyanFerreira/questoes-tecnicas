#include <stdio.h>

int pertenceFibonacci(int num) {
    int a = 0, b = 1, c = 0;
    printf("%d %d ", a, b);
    
    if (num == 0 || num == 1) {
        return 1;
    }

    while (c < num) {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", b);
    }

    if (c == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (pertenceFibonacci(numero)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %d NAO pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}

