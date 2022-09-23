#include<stdio.h>


main(){
	float Gas, Eta, med;
	
	printf("Insira preco da gasosa: ");
	scanf("%f", & Gas);
	printf("Insira preco do etanol: ");
	scanf("%f", & Eta);
	
	med = Eta/Gas;
	
	if(med <= 0.7){
		printf("Vai de etanol");	
	}
	else{
		printf("Vai na gasosa");	
	}
	
}
