#include "matematica.h"

int fatorial(int n) {
    int i, f = 1;
    if (n < 0) {
        return 0;
    }
    for (i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int eh_primo(int n) {
    int i;
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int mdc(int a, int b) {
    int resto;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    if (a == 0) return b;
    if (b == 0) return a;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int mmc(int a, int b) {
    int d;
    if (a == 0 || b == 0) return 0;
    d = mdc(a, b);
    return (a / d) * b;
}

double media(double a, double b) {
    return (a + b) / 2.0;
}

double potencia(double base, int expoente) {
    double resultado = 1.0;
    int i;

    if (expoente < 0) {
        for (i = 0; i < -expoente; i++) {
            resultado *= base;
        }
        return 1.0 / resultado;
    }

    for (i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

double raiz_quadrada(double n) {
    double x, antigo;
    int i;

    if (n < 0.0) {
        return -1.0;
    }
    if (n == 0.0) return 0.0;

    x = n / 2.0;
    for (i = 0; i < 30; i++) { 
        if (x == 0.0) break;
        antigo = x;
        x = 0.5 * (x + n / x);
        if (x == antigo) break;
    }
    return x;
}
