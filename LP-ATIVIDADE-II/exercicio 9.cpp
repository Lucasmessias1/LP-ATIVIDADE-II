#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	
	setlocale(LC_ALL,"portuguese");
	
    int numero, i, primo = 1;
    
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        primo = 0;
    } else if (numero <= 3) {
        primo = 1;
    } else if (numero % 2 == 0) {
        primo = 0;
    } else {
        for (i = 3; i * i <= numero; i += 2) {
            if (numero % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    switch (primo) {
        case 1:
            printf("N�mero primo\n");
            break;
        case 0:
            printf("N�mero n�o primo\n");
            break;
    }
    
    return 0;
}
