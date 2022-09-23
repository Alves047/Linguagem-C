#include <stdio.h>
#include <math.h>

main(){
	float a,b,c,delta,x1,x2;
	
	printf("Digite o valor de A: ");
	scanf("%f", & a);
	printf("Digite o valor de B: ");
	scanf("%f", & b);
	printf("Digite o valor de C: ");
	scanf("%f", & c);
	
	if (a!=0){
		delta = (b*b) - 4*a*c;
		if (delta == 0) {
			x1 = (-b + (delta))/(2*a);
			printf("Delta Igual a 0 \n");
			printf("x1 e x2 = %.2f", x1);
		} else {
			if (delta > 0){
				x1 = (-b + (delta))/(2*a);
				x2 = (-b - (delta))/(2*a);
				printf("Delta Maior a 0 \n");
				printf("x1 = %.2f", x1);
				printf("x2 = %.2f", x2);
			} else {
					printf("Delta menor que 0\n");
					printf("Nao existe raiz real.");
			  }
		}
		}else {
				printf ("Nao eh uma equacao de seg. grau \n");
				printf("a tem que ser diferente de 0");
		}
	}

