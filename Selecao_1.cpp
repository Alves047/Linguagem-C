#include <stdio.h>

main(){
// Variables
	int n1, n2;
// Values Output & Input	
	printf("insira um valor: ");
	scanf("%d",  & n1);
	printf("Armazenando \n");
	printf("insira um valor: ");
	scanf("%d", & n2);	
	//Condicional -> verificando igualdades	
		if(n1 == n2){
			printf("Sao iguais");
		}
		else{
			printf("Sao diferentes");
		}
}
