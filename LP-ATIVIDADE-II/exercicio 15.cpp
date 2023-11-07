#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL,"portuguese");
 
    int escolha;
    float valor, resultado;

    while (1) {
        printf("Escolha a conversão desejada:\n");
        printf("1. Quilômetros para Milhas\n");
        printf("2. Celsius para Fahrenheit\n");
        printf("0. Sair do programa\n");

        scanf("%d", &escolha);

        if (escolha == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

        switch (escolha) {
            case 1:
                resultado = valor * 0.621371;
                printf("%.2f quilômetros são aproximadamente %.2f milhas.\n", valor, resultado);
                break;
            case 2:
                resultado = (valor * 9/5) + 32;
                printf("%.2f graus Celsius são aproximadamente %.2f graus Fahrenheit.\n", valor, resultado);
                break;
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    }

    return 0;
} 
