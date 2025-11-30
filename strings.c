#include "strings.h"
#include <ctype.h>
#include <string.h>

int conta_vogais(const char *str) {
    int count = 0;
    char c;

    if (str == NULL) return 0;

    while (*str != '\0') {
        c = (char)tolower((unsigned char)*str);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int conta_consoantes(const char *str) {
    int count = 0;
    char c;

    if (str == NULL) return 0;

    while (*str != '\0') {
        c = (char)tolower((unsigned char)*str);
        if (c >= 'a' && c <= 'z') {
            if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
                count++;
            }
        }
        str++;
    }
    return count;
}

void string_maiuscula(char *str) {
    if (str == NULL) return;
    while (*str != '\0') {
        *str = (char)toupper((unsigned char)*str);
        str++;
    }
}

void string_minuscula(char *str) {
    if (str == NULL) return;
    while (*str != '\0') {
        *str = (char)tolower((unsigned char)*str);
        str++;
    }
}

void inverte_string(char *str) {
    int i, j;
    char tmp;

    if (str == NULL) return;

    j = (int)strlen(str) - 1;
    i = 0;
    while (i < j) {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
}

int compara_strings(const char *s1, const char *s2) {
    return strcmp(s1, s2);
}
