#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"portugueses");
	
    int numero, somaPares = 0, somaImpares = 0;
    int quantidadePares = 0, quantidadeImpares = 0;

    printf("Digite n�meros inteiros (digite 0 para sair):\n");

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
        printf("N�meros pares: %d\n", quantidadePares);
        printf("M�dia dos n�meros pares: %.2f\n", mediaPares);
    } else {
        printf("Nenhum n�mero par foi digitado.\n");
    }

    if (quantidadeImpares > 0) {
        float mediaImpares = (float)somaImpares / quantidadeImpares;
        printf("N�meros �mpares: %d\n", quantidadeImpares);
        printf("M�dia dos n�meros �mpares: %.2f\n", mediaImpares);
    } else {
        printf("Nenhum n�mero �mpar foi digitado.\n");
    }

    return 0;
}
