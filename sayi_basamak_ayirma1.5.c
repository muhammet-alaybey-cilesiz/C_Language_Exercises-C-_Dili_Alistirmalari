#include <stdio.h>
#include <stdlib.h>

//Girilen Sayının Basamak Değerlerini Ogrenme

int main(){
	int a,yuzler_basamagi,onlar_basamagi,birler_basamagi;
	
	while(1){
		printf("3 basamktan fazla deger girmeyiniz...\n");
		printf("a: ");
		scanf("%d",&a);

		if(a >= -999 && a <= 999){
			break; 
		}
		else{
			printf("Tekrar deger giriniz...\n");
		}
    }
	
	yuzler_basamagi = a/100;
	printf("yuzler basamagi: %d\n",yuzler_basamagi);
	
	onlar_basamagi = (a/10) % 10;
	printf("onlar basamagi: %d\n",onlar_basamagi);
	
	birler_basamagi = a%10;
	printf("birler basamagi: %d\n",birler_basamagi);
	
	return 0;
}