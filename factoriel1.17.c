#include <stdio.h>
#include <stdlib.h>

//Factorial Calculus
//Faktöriyel Hesaplama  

#define MAX_INPUT 20         // There is an overflow after 20. That's why we limited it.
                             // 20'den sonra taşma oluyor. BU yüzden sınırladık.

int main(){
	int number;
	long long int factorial = 1;

	while (1)
	{
		printf("number to be factored (0-20): "); 
		if(scanf("%d",&number) != 1 || number < 0 || number > MAX_INPUT){
			printf("Invalid value.Please enter a valid value.\n");         //Geçersiz değer.Lütfen geçerli bir değer girin.
			while (getchar() != '\n');       // stdin cleaning (stdin temizliği)
		}
		else{
			break;
		}
	}
	
	for (int i=1; i <=number; i++)
	{
		factorial *= i;
	}
	
	printf("%d!= %lld",number,factorial);

	return 0;
}