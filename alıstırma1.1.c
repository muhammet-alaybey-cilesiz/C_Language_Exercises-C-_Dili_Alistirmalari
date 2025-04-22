#include <stdio.h>

/*GİRİLEN SAYILARIN KARSİLASTİRİLMASİ */

int main(){
	int A,B;
	printf("A sayisini giriniz: "); 
	scanf("%d",&A);
	printf("B sayisini giriniz: ");
	scanf("%d",&B);	
    
    if(A==B){
    	printf("A sayisi B sayisina esittir.");
	}
    if(A>B){
    	printf("A sayisi B sayisindan buyuktur.");
    	
	}
    else{
    	printf("A sayisi B sayisindan kucuktur.");
	}
	return 0;
}
