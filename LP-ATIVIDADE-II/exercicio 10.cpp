#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
    float numero1, numero2, resultado;
    char operacao;

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &numero2);
    printf("Digite a opera��o (+ ou -): ");
    scanf(" %c", &operacao);  // Note o espa�o em branco antes de %c para evitar problemas com caracteres de quebra de linha.

    switch (operacao) {
        case '+':
            resultado = numero1 + numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = numero1 - numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        default:
            printf("Opera��o inv�lida. Por favor, insira + ou -.\n");
    }

    return 0;
}
