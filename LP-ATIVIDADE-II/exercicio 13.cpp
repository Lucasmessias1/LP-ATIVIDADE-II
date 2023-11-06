#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
    int numero1, numero2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        printf("O maior número é: %d\n", numero1);
        printf("O menor número é: %d\n", numero2);
    } else if (numero2 > numero1) {
        printf("O maior número é: %d\n", numero2);
        printf("O menor número é: %d\n", numero1);
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}
