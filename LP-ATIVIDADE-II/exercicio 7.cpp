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
	printf("\t |3| Configura��es | \n");
	
	printf("Escolha a op��o:");
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
		printf("Configura��es.");
	break;		 	
    
	
	default: ("op��o invalida");
	break;
}
	
	return 0;
}
