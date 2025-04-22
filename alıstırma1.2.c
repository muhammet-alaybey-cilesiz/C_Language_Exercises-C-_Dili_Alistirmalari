#include <stdio.h>

// GİRİLEN SAYILARIN TURUNU OGRENME

int main(){
	int A,B;
	printf("A sayisini giriniz: ");
	scanf("%d",&A);
	printf("B sayisini giriniz: ");
	scanf("%d",&B);
    
    if(A>0){
    	printf("A sayisi pozitiftir.");
	}
	else{
		printf("A sayisi negatiftir.");
	}
	if(B>0){
		printf("\nB sayisi pozitiftir.");
	}
	else {
		printf("\nB sayisi negatiftir.");
	}
	
	return 0;
}
