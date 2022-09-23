#include<stdio.h>

main(){
//Variaveis
	int cod, i;
	float media, preco, maior=0;
	//Loop contador de produtos e demais operaçoes
		for(i=0;i<2:i++){
			printf("Insira o codigo do produto: ");
			scanf("%d", & cod);
			printf("Insira o preco do produto: ");
			scanf("%f", & preco);
			
			if(preco > maior){
				maior = preco;
				
			}
		media += preco;	
		}
	media = media/i;
	//Saida de informaçoes	
		printf("O maior valor do produto encontrado foi: %f ", maior);
		printf("A media dos produtos eh: %f", media);		
}
