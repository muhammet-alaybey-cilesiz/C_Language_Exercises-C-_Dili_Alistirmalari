#include <stdio.h>

//Program that gives different color output depending on the entered temperature value
//Girilen sıcaklık değerine göre farklı renk çıktısı veren program

int main(){
	int t;     // t: (temperature / sıcaklık) 
	printf("t: ");
	scanf("%d",&t);
	
	if(t>=35){
		printf("Red");
	}
	else if(t>=20){
		printf("Orange");
	}
	else if(t>=0){
		printf("Green");
	}
	else if(t<0){
		printf("Blue");
	}
	return 0;
}
