#include "util.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void limpa_buffer(void) {
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

void pausa(void) {
    printf("Pressione ENTER para continuar...");
    limpa_buffer();
}

int numero_aleatorio(int min, int max) {
    int intervalo;
    if (min > max) {
        int tmp = min;
        min = max;
        max = tmp;
    }
    intervalo = max - min + 1;
    return min + rand() % intervalo;
}

void ordena_vetor(int *vetor, int tamanho) {
    int i, j, tmp;
    if (vetor == NULL || tamanho <= 1) return;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                tmp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = tmp;
            }
        }
    }
}

void imprime_vetor(const int *vetor, int tamanho) {
    int i;
    if (vetor == NULL || tamanho <= 0) return;

    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
