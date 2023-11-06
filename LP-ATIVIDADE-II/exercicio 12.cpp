#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i;
	int nota;
	int soma=0;
	float media;
	
	for (i = 1; i <=2; i++){
		printf("Informe o %dº número:",i);
		scanf("%d",&nota);	
		
	soma += nota;	
		
	}
	
     media = soma / 2;
     
     
     printf("media %.1f \n",media);
	
	return 0;
}
