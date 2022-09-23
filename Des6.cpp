#include <stdio.h>
#include<stdlib.h>
int main() {
	int min, max, i, j, primo;
	scanf("%i %i", &min, &max);
	
	for (i = min; i <= max; i++) {
		if (i == 0 || i == 1 || i== -1) { //condiderando numeros negativos || i==-1
		
			primo = 0;
		} else {
			primo = 1;
			if (i<0) {//considerando numero negativo
				for(j = 2; j < (i*-1); j++) { //considerando numeros negativos (i*-1)
				if ((i*-1) % j == 0) { //considerando numeros negativos (i*-1)
					primo = 0; 
				}
			}
		}else{			//nº negativo
			for(j = 2; j<i; j++){ //nº negativo
				if (1%j==0){	//nº negativo
					primo=0; //nº negativo
				}
			}
		}
	}
		if (primo == 1) {
			printf("%i ", i);
		}
	}
	
	return 0;
}

