#include <stdio.h>

main(){
//Variaveis
	float med;
//Output e Input	
	printf("insira o valor para medida: ");
	scanf("%f", & med);
	//Calculo
		med  = med / 2.54;
//Output resultado
	printf("o valor equivalente em centimetros eh : %f", med);
}
