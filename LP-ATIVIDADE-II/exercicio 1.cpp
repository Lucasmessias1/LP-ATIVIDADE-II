#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	int temp;
	
	printf("Informe A Temperatura: ");
	scanf("%d",&temp);
	
	if ( temp < 25 || temp > 15 )  {
		printf("o clima ser� nublado.");
	} else if (temp > 25) {
		printf("O clima ser� ensolarado.");
	} else {
		printf("o clima ser� chuvoso.");
	}
	
	
	
	return 0;
}
