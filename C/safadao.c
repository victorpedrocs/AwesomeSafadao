#include <stdio.h>

int somatorio(int mes) {
    int i, soma = 0;

    for (i = 1; i <= mes; i++) {
        soma += i;
    }

    return soma;
}

void wesley_safadao(int dia, int mes, int ano) {
    float safadeza, anjo;

    safadeza = somatorio(mes) + (ano/100) * (50-dia);
    anjo = 100 - safadeza;

    printf("%.1f %% ANJO, mas o %.1f %% eh VAGABUNDO!\n", anjo, safadeza);
}

int main(int argc, char const *argv[]) {
    int dia = 0, mes = 0, ano = 0;

    printf("Insira sua data de nascimento:\n");
    printf("Dia (dd): ");
    fflush(stdin);
    scanf("%d", &dia);
    printf("Mes (mm): ");
    fflush(stdin);
    scanf("%d", &mes);
    printf("Ano (AA): ");
    fflush(stdin);
    scanf("%d", &ano);

    wesley_safadao(dia, mes, ano);

    return 0;
}
