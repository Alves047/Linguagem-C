#include<stdio.h>

main(){
//Variaveis
	int age;
//Enrada e Saida
	printf("Insira sua idade: ");
	scanf("%d", & age);
	
	//Verificando RANGE dos valores	
		if(age >= 5 && age <=7){
			printf("CATEGORIA 'A' - infantil");
		}
		else if (age >=8 && age<=10){
			printf("CATEGORIA 'B' - infantil");
		}
		else if (age >=11 && age<=13){
			printf("CATEGORIA 'A' - juvenil");
		}
		else if (age >=14 && age<=17){
			printf("CATEGORIA 'B' - juvenil");
		}
		else if (age >=18){
			printf("CATEGORIA 'ADULTO");
		}			
}	 
		

