#include <iostream>
using namespace std;

main(){
//Variaveis	
	int Chico = 150 , Juca = 110;
	int cont;
	//Loop -> verificando crescimento com passar do tempo	
		do{
			Chico = Chico + 2;
			Juca = Juca + 3;
			cont++;
			
		}while(Chico>Juca);	
	printf("Serao necessarios %d anos para que Juca seja maior do que Chico", cont);	
}



