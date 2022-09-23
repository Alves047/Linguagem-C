#include<stdio.h>
main(){
//Variaveis
	int number, aux = 1, res;
//Saida e entrada de dados	
	printf("Insira um numero: ");
	scanf("%d", & number);
	//loop para calculo
		for(res=1; res<=number;res++){
			aux *= res;	
		}
//Saida de info
	printf("O valor fatorial de %d equivale a %d", number, aux);
}
