#include <stdio.h>

//Continue and Break Logic
//Continue ve Break Mantığı 

int main(){
	for(int i=0; i<=10; i++){
		if(i == 5){
			continue;	
		}
		printf("%d\n",i);
	}
	for(int i=0; i<=10; i++){
		if(i == 4){
			break;
		}
		printf("%d\n",i);
	}
	return 0;
}
