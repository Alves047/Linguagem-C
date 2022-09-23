#include <stdio.h>

main(){
//Variaveis
	int n, aS =1, aA;
//Input & Output
	printf("Insira um numero: ");
	scanf("%d", & n);
	//Calcuo dos valores e Atribuiçao 
		aS = n + 1;
		aA = n - 1;
//Output valores	
	printf("o antecessor eh %d e sucessor eh %d ", aA, aS);
}
