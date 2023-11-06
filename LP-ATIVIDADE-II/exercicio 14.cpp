#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"portugueses");
	
    int numero, somaPares = 0, somaImpares = 0;
    int quantidadePares = 0, quantidadeImpares = 0;

    printf("Digite números inteiros (digite 0 para sair):\n");

    do {
        scanf("%d", &numero);

        if (numero != 0) {
            if (numero % 2 == 0) {
                somaPares += numero;
                quantidadePares++;
            } else {
                somaImpares += numero;
                quantidadeImpares++;
            }
        }
    } while (numero != 0);

    if (quantidadePares > 0) {
        float mediaPares = (float)somaPares / quantidadePares;
        printf("Números pares: %d\n", quantidadePares);
        printf("Média dos números pares: %.2f\n", mediaPares);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    if (quantidadeImpares > 0) {
        float mediaImpares = (float)somaImpares / quantidadeImpares;
        printf("Números ímpares: %d\n", quantidadeImpares);
        printf("Média dos números ímpares: %.2f\n", mediaImpares);
    } else {
        printf("Nenhum número ímpar foi digitado.\n");
    }

    return 0;
}
