#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese ");
	
	int codigo;
	
	printf("Escolha o n�mero!\n");
	printf("\n");
	printf("\t------Menu------\n");
	printf("\t |1| Camiseta | R$ 50.00  \n");
	printf("\t |2| Cal�a    | R$ 45.00  \n");
	printf("\t |3| Sapato   | R$ 200.00 \n");
	
    printf("Informe o C�digo Referente ao item comprado: ");
    scanf("%d",&codigo);
	
	if (codigo == 1){
		printf("compra efetuada \n camiseta \n R$ 50.00 ");	
  }
	if (codigo == 2){
		printf("Compra Efetuada \n Cal�a \n R$ 45.00");
 }	
	if (codigo == 3){
		printf("Compra Efetuada \n Sapato \n R$ 200.00");
	}

	
	return 0;	
}

