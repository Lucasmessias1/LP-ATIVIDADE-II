#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
    int numero1, numero2;

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &numero1);
    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        printf("O maior n�mero �: %d\n", numero1);
        printf("O menor n�mero �: %d\n", numero2);
    } else if (numero2 > numero1) {
        printf("O maior n�mero �: %d\n", numero2);
        printf("O menor n�mero �: %d\n", numero1);
    } else {
        printf("Os n�meros s�o iguais.\n");
    }

    return 0;
}
