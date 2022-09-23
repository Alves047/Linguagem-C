#include<stdio.h>
main(){
//Variaveis
	int v1, v2, x,s=0;
	//Entrada e saida para os valores
		printf("Digite um numero: ");
		scanf("%i", &v1);
		printf("Digite outro numero: ");
		scanf("%i", &v2);
		
		if(v2>v1){
			for (x=v1;x<=v2;x++){
				s=s+x;
			}
			printf("A soma eh %i",s, v1, v2);
		}
}
