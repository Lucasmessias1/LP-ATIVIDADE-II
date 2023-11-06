#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){
	
	setlocale(LC_ALL,"portuguese");
	
  int idade; 
	
	printf("Informe sua Idade:");
	scanf("%d",&idade);
	
	if (idade >= 18) {
		printf("Acesso permitido.");
    } else {
    	printf("Acesso Negado.");
	}
		
	
	
	
	
	
	
	
	return 0;
	}
