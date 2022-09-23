#include<stdio.h>
#include<math.h>

main(){
	float Pi = 3.14159, ray, compr, area;
	
	printf("Insira um numero: ") ;
	scanf("%f", & ray);
	
	area = Pi * pow(ray,2); 
	compr = (2*Pi) * ray;
	
	printf("Area = %f", area);
	printf("\nComprimento = %f", compr);
	
}
