#include <stdio.h>

//GİRİLEN SAYİLARİN TURUNU OGRENME

int main(){
	int A,B;
	printf("A sayisini giriniz: ");
	scanf("%d",&A);
	printf("B sayisini giriniz: ");
	scanf("%d",&B);
    
    if(A%2==0){
    	printf("A sayisi cifttir.");
	}
	else{
		printf("A sayisi tektir.");
	}
	if(B%2==0){
		printf("\nB sayisi cifttir.");
	}
	else {
		printf("\nB sayisi tektir.");
	}
	
	return 0;
	}
