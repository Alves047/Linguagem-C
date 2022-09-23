#include <stdio.h>

main(){
//Variaveis
	float ap; 
	int apUni;
//Input & Output	
	printf("Insira a quantidade de 'apples': ");
	scanf("%d", & apUni);
 	//Calculo condicional aos valores 	
		if(apUni < 12){
			ap = apUni * 1.30;
			printf("O valor total eh: %f", ap);
		}else if(apUni >= 12){
			ap = apUni * 1.00;
			printf("O valor total eh: %f", ap);
		}
}
