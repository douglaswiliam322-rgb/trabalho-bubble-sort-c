#include <stdio.h>


int main (){

float precos[10];
int i, j;
float aux;

printf("Digite os precos de 10 produtos:\n");
for (i = 0; i < 10; i++) {
    printf("Produto %d: R$ ", i + 1);
    scanf("%f", &precos[i]);
}


printf("=== SISTEMA DE ORDENACAO DE PRECOS ===\n");

printf("\n--- PRECOS ANTES DA ORDENACAO ---\n");
for (i = 0; i < 10; i++){
    printf("R$ %.2f | ", precos[i]);
}


printf("\n");

//implementação do Bubble Sort (Ordem Crescente)

    for (i = 0; i < 9; i++) { 
        for (j = 0; j < 9 - i; j++) {
            if (precos[j] > precos[j + 1]) {
                aux = precos[j];
                precos[j] = precos[j + 1];
                precos[j + 1] = aux;
            }
        }
    }

    printf("\n--- PRECOS APOS A ORDENACAO (CRESCENTE) ---\n");
    for (i = 0; i < 10; i++) {
        printf("R$ %.2f | ", precos[i]);
    }
    printf("\n\nPrograma finalizado com sucesso!\n");

    return 0;

}