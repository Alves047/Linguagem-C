#include<stdio.h>

main(){
//Variaveis	
	int id_cli; 
	float value;
//Saida e entrada de valores
	printf("insira tua id: ");	
	scanf("%d", & id_cli);
	//Condicional SWITCH Case -> verificando cliente e calculando
		switch(id_cli){
			case 1:
				printf("*-Consumidor-*\n");
				
				printf("Insira o valor total dos produtos: ");
				scanf("%d", & value);
				printf("O valor total eh: %f", value);	
				break;
			case 2:
				printf("*-Funcionário-*\n");
				
				printf("Insira o valor total dos produtos: ");
				scanf("%f", & value);
				value = value - (value * 0.10);
				printf("O valor total eh: %f", value);
				break;
			case 3:
				printf("*-Cliente VIP-*\n");  
				
				printf("Insira o valor total dos produtos: ");
				scanf("%f", & value);
				value = value - (value * 0.05);
				printf("O valor total eh: %f", value);
				break;
			default:
				printf("Insira um valor valido");
		}		
}	 
		

