#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int opacao;
	
	printf("\t------Menu-----\n");
	printf("\n");
	printf("\t |1| Novo Jogo     | \n");
	printf("\t |2| Carregar Jogo | \n");
	printf("\t |3| Configurações | \n");
	
	printf("Escolha a opção:");
	scanf("%d",&opacao);
	
	switch (opacao) 
	{	
	case 1: 
		 printf("Novo Jogo.");
	break;	 				
		
	case 2: 
		printf("Carregar Jogo.");
	break;
		
	 case 3: 
		printf("Configurações.");
	break;		 	
    
	
	default: ("opção invalida");
	break;
}
	
	return 0;
}
