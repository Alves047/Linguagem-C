#include <stdio.h>
main(){
//Variaveis
	float litros;
	char combustivel;
	//Entrada e valores
		printf("Digite o combustivel desejado 1-Alcool ou 2-Gasolina: ");
		scanf("%d", & combustivel);	
	//Condicional 
		switch(combustivel){
			case 1:
				//Saida valores
					printf("\nQuantos litros deseja abastecer: ");
					scanf("%f", & litros);
				//Condicional -> verificando variaveis de acordo com o desconto
					if (litros<=20.0){
						litros= (litros*2.90)-((litros*2.90)*0.03);
						printf("O valor a pagar eh: %.2f", litros );
					}
					else if(litros>20.0){
						litros= (litros*2.90)-((litros*2.90)*0.05);
						printf("O valor a pagar eh: %.2f", litros );
					}
				
			break;
			case 2:
				//SAIDA E ENTRADA DOS VALORES
					printf("\nQuantos litros deseja abastecer: ");
					scanf("%f", & litros);
				//Condicional -> verificando variaveis de acordo com o desconto
					if (litros<=20.0){
						litros= (litros*3.30)-((litros*3.30)*0.04);
						printf("O valor a pagar eh: %.2f", litros );
					}
					else if(litros>20.0){
						litros= (litros*3.30)-((litros*3.30)*0.06);
						printf("O valor a pagar eh: %.2f", litros );
					}
			break;
			default:
				printf("ERRO");
			}
}
				
		
