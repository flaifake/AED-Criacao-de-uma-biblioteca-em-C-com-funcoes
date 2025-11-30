#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matematica.h"
#include "strings.h"
#include "util.h"

int main() {
    int v[5] = {5, 2, 9, 1, 7};
    char texto[100] = "Tecnicas de Programacao";

    srand((unsigned)time(NULL));

    printf("fatorial(5) = %d\n", fatorial(5));
    printf("eh_primo(7) = %d\n", eh_primo(7));
    printf("mdc(12, 18) = %d\n", mdc(12, 18));
    printf("mmc(12, 18) = %d\n", mmc(12, 18));
    printf("media(4.0, 6.0) = %.2f\n", media(4.0, 6.0));
    printf("potencia(2.0, 10) = %.2f\n", potencia(2.0, 10));
    printf("raiz_quadrada(9.0) = %.4f\n\n", raiz_quadrada(9.0));

    printf("Texto original: %s\n", texto);
    printf("Vogais: %d\n", conta_vogais(texto));
    printf("Consoantes: %d\n", conta_consoantes(texto));

    string_maiuscula(texto);
    printf("Maiuscula: %s\n", texto);
    string_minuscula(texto);
    printf("Minuscula: %s\n", texto);
    inverte_string(texto);
    printf("Invertida: %s\n\n", texto);

    printf("Vetor original: ");
    imprime_vetor(v, 5);
    ordena_vetor(v, 5);
    printf("Vetor ordenado: ");
    imprime_vetor(v, 5);

    printf("Numero aleatorio entre 1 e 10: %d\n", numero_aleatorio(1, 10));

    pausa();
    return 0;
}
