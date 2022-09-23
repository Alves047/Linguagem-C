//----------------------Importaçao Biblioteca(S)--------------------------------------
#include<stdio.h>
#include<math.h>


main(){
//------------------Seçao de variaveis------------------------------------------------
	int pes;
	float h, IMC;
//---------------------E/S de dados---------------------------------------------------	
	printf("Insira seu peso: ");
	scanf("%d", & pes);
	printf("Insira sua altura em metros: ");
	scanf("%f", & h);
//-----------------------------Calculando---------------------------------------------
	IMC = pes / pow(h,2);
	printf("Seu peso: %f", IMC);	
//----------------VERICANDO RESULTADO E EXIBINDO DE ACORDO COM A CATEGORIA DE PESO-------------------
	if(IMC< 20.0){
		printf("\nSeu peso esta abaixo do padrao!");			
	}
	else if(IMC>=20.0 && IMC<=25.0){
		printf("\nSeu peso esta normal");
	}
	else if(IMC>=25.0 && IMC<=30.0){
		printf("\nSeu peso esta na categoria 'SOBRE PESO'! Cuidado com a alimentacao, meu nobre");
	}	
	else if(IMC>=30.0 && IMC<=40.0){
		printf("\nSeu peso esta classificado como 'Obeso'!. Bora malhar?");
	}
	else if(IMC>40.0){
		printf("\nATENCAO: SEU PESO ESTA CLASSIFICADO COMO 'OBESIDADE MORBIDA'!");
	}
	else{
		printf("\nHouve algum erro! Por favor, entre em contato com um de nossos dev's atraves do canal...");
	}
}
