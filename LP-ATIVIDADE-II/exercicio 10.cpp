#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
    float numero1, numero2, resultado;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);
    printf("Digite o segundo número: ");
    scanf("%f", &numero2);
    printf("Digite a operação (+ ou -): ");
    scanf(" %c", &operacao);  // Note o espaço em branco antes de %c para evitar problemas com caracteres de quebra de linha.

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
            printf("Operação inválida. Por favor, insira + ou -.\n");
    }

    return 0;
}
