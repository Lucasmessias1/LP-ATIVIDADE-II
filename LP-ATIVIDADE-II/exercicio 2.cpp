#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
    float valorCompra, desconto = 0.0;
    int diaDaSemana;
	float valorDesconto;

    printf("Informe o valor da compra em R$: ");
    scanf("%f", &valorCompra);
    printf("Informe o dia da semana : ");
    scanf("%d", &diaDaSemana);

	valorDesconto = 100.00;

    if (valorCompra >= valorDesconto) {
        if (diaDaSemana >= 2 && diaDaSemana <= 6) {
            desconto = 0.10;
        } else if (diaDaSemana == 7 || diaDaSemana == 1) {
            desconto = 0.15;
        }
    }

    if (desconto > 0) {
        float valorComDesconto = valorCompra * (1 - desconto);
        printf("Desconto de %.2f%% aplicado. \n Valor com desconto: R$%.2f\n", desconto * 100, valorComDesconto);
    } else {
        printf("Sem desconto aplicado. Valor \n total: R$%.2f\n", valorCompra);
    }

    return 0;
}
