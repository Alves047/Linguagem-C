#include<stdio.h>

main(){
//Variaveis
	float nota1, nota2, media;
	//SAIDA E ENTRADA	
		printf("Insira as notas equivalente as avaliacao1 : ");
		scanf("%f", & nota1);
		printf("Insira as notas equivalente as avaliacao2 : ");
		scanf("%f", & nota2);
		printf("Calculando...");
		//Calculo:
			media = (nota1 + nota2)/ 2;
	//Verificando media
		if(media < 6){
			printf("REPROVADO! Nota final : %f", media);
		}else{
			printf("APROVADO! Nota final : %f", media);	
		}
}	 
		

