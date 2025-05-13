#include <stdio.h>
#include <stdlib.h>

// Calculator and Error Precautions
// Hesap Makinesi ve Hata Önlemleri

int main(){
	float number1,number2,result;
	char operation;
	while (1)
	{
		printf("number1: ");
		if(scanf("%f",&number1) != 1 ){
			printf("Invalid input. Please enter a valid number.\n");  // Geçersiz giriş. Lütfen geçerli bir sayı girin.
			while (getchar() != '\n');                                // Buffer cleaning // Buffer temizliği
		}
		else{
			break;
		}
	}

	while (1)
	{
		printf("operation: ");
		if(scanf(" %c",&operation) != 1 || (operation != '+' && operation != '-' && operation != '*' && operation != '/') ){
			printf("Invalid operation. Please enter a valid operation.(+,-,*,/)\n");  // Geçersiz işlem. Lütfen geçerli bir işlem girin.(+,-,*,/)
			while (getchar() != '\n');
		}
		else{
			break;
		}
	}

	while (1)
	{
		printf("number2: ");
		if(scanf("%f",&number2) != 1 ){
			printf("Invalid input. Please enter a valid number.\n");  
			while (getchar() != '\n');
		}
		else{
			if(operation == '/' && number2 == 0){
				printf("Error: Division by zero is not allowed. Please enter a valid number.\n");  // Hata: Sıfıra bölme işlemi yapılamaz. Lütfen geçerli bir sayı girin.
			}
			else{
				break;
			}
     	}    
	}
	
	switch(operation){
		case '+':
			result = (number1 + number2);
			printf("Result: %.2f",result);
			break;
		case '-':
			result = (number1 - number2);
			printf("Result: %.2f",result);
			break;
		case '*':
			result = (number1 * number2);
			printf("Result: %.2f",result);
			break;
		case '/':
			result = (number1/ number2);
			printf("Result: %.2f",result);
			break;		
		}
	
	return 0;
}
