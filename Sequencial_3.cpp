#include <stdio.h>

main(){
//Variables	
	float pc, pf;
//Saida e entrada de valores	
	printf("Insira o valor do carro: ");
	scanf("%f", & pc);
	//Calculando...
		pc = (pc * 1.28) * 1.45;
//Saida do resultado
	printf("o valor total do veiculo eh: %f", pc);
}
