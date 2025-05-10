#include <stdio.h>
#include <stdlib.h>

//Fibonacci sequence , data size and buffer cleaning
//Fibonacci dizisi, veri boyutu ve tampon temizliği

int main(){
	int n ;
	long long int a,b,sequence;      // "long long int" is used to increase the data size.(When we used "int" the series could go up to 47.)
	a = 0;                           // "long long int" veri boyutunu artırmak için kullanılır.("int" kullandığımızda seri 47'ye kadar çıkabiliyordu.)
	b = 1;
    sequence = 0;
	while (1){
		printf("How many numbers do you want to have in the sequence ? (1-92) : ");  // Dizide kaç tane sayı olmasını istiyorsunuz?
		if(scanf("%d",&n) != 1 || n <= 0 || n >= 93 ){                
			printf("Invalid value! Please enter a positive integer up to 93. \n");   // Geçersiz değer! Lütfen 93 e kadar olan pozitif bir tam sayı girin.		
			while (getchar() != '\n');                                               // Buffer cleaning / Buffer temizliği                         
		}
		else{
			break;
		}
	}

	printf("1\n");
	for(int i=1; i<n; i++){
		sequence = a + b;
		printf("%lld\n",sequence);
	    a = b;
	    b = sequence;
	}
	return 0;
	}