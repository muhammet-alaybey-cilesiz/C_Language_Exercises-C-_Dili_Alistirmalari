#include <stdio.h>
#include <math.h>

//Pow Fonksiyonun Kullanımı 
//Using The Pow Function

int main(){
	double base,power,result; //taban,üs,sonuç 
	printf("base: ");
	scanf("%lf",&base);
	printf("power: ");
	scanf("%lf",&power);
	
	result = pow(base,power);
	printf("%.2lf ^ %.2lf= %.2lf",base,power,result);
	
	return 0;
}
