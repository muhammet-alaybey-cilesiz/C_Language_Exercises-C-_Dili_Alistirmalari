#include <stdio.h>
#include <stdlib.h>

//Program that prints numbers in desired range and step size
//İstenilen aralıkta ve adım boyutunda sayıları yazdıran program

int main(){
	int start,end,step_size;
	while(1){
		printf("Start value: ");
		scanf("%d",&start);
		printf("End value: ");
		scanf("%d",&end);
		printf("Step size: ");
	        scanf("%d",&step_size);
		if(step_size == 0){
			printf("Step size cannot be zero. Please enter a valid value.\n"); //Adım boyutu sıfır olamaz. Lütfen geçerli bir değer girin.
		}
		else if (step_size < 0 && end > start){
			printf("Must be in countdown (start > finish)! Please enter a valid value.\n"); //Geri sayımda (başlangıç ​​> bitiş) olmalı.
		}
		else if (step_size > 0 && start > end){
			printf("must be (end > start)! Please enter a valid value.\n");                 // (bitiş > başlangıç) olmalı. 
		}
		else {
			break;
		}
	}

	if(step_size > 0){
		for(int i=start; i<=end; i+=step_size){
		printf("%d\n",i);
		}
	}
	else{
		for(int i=start; i>=end; i+=step_size){
		printf("%d\n",i);
		}
	}

    return 0;
}
