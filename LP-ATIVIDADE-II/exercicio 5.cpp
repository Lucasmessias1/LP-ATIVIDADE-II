	
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int idioma;
	
	printf("Escolha qual idioma voc� que utilizar \n "); 
	printf("\t--------Menu------- \n");
	printf("\t | 1 | Ingl�s   | \n");
	printf("\t | 2 | Espanhol | \n");
	printf("\t | 3 | Franc�s  | \n"); 
	
	printf("Informe o Idioma:");
	scanf("%d", &idioma);
	 
	if (idioma == 1){
		printf("welcome");
   }  
   	 if (idioma == 2 ){
		printf("bienvenida");
   }
	if (idioma == 3){
		printf("accueillir");
	} 				
	
	return 0;
}
