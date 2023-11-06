#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	
	setlocale(LC_ALL,"portuguese");
	
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        
    } else {
        printf("Contagem regressiva a partir de %d:\n", numero);
        for (int i = numero; i >= 0; i--) {
            printf("%d ", i);
        }
        
    }

    return 0;
}
