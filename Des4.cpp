#include<stdio.h>

main(){
	int op1, op2,res;
	char operador;
	
	printf("insira o primeiro numero: ");
	scanf("%d", & op1);
	printf("insira o operador desejado: ");
	scanf("%c", & operador);
	printf("insira o segundo numero: ");
	scanf("%d", & op2);
	
	switch(operador){
		case '+':
			res = op1 + op2;
			printf("Resultado = %d", res);	
		break;
		default:
			printf(".");				
	}
	
	
	
}
