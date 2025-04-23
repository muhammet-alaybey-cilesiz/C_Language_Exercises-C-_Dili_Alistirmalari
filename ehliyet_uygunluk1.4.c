#include <stdio.h>

//Ehliyet Yas Kontrolu

int main(){
	int Yas;
	printf("Yasinizi giriniz: ");
	scanf("%d",&Yas);
	
	if(Yas>=18){
		printf("Ehliyet alabilirsiniz.");
	}
	else {
		printf("Henuz ehliyet alabilecek yasta degilsiniz.");
	}
	
	return 0;
}
