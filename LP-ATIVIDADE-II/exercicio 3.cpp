#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	
	setlocale(LC_ALL,"portuguese");
	
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 9.0) {
        printf("Classifica��o: Excelente\n");
    } else if (nota >= 7.0 && nota < 9.0) {
        printf("Classifica��o: Bom\n");
    } else if (nota >= 5.0 && nota < 7.0) {
        printf("Classifica��o: Razo�vel\n");
    } else {
        printf("Classifica��o: Insuficiente\n");
    }

    return 0;
}
