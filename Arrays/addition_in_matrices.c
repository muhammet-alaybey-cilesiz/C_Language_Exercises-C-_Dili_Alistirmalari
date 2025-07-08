#include <stdio.h>

//Addition in matrices
//Matrislerde toplama

int main(){
	int m1[2][2]={10,20,30,40};
	int m2[2][2]={50,60,70,80};
	int total[2][2];
	int i,j;
    
    for(i=0; i<2; i++){
    	for(j=0; j<2; j++){
    		total[i][j]=m1[i][j]+m2[i][j];
		}
	}

	printf("Total Matrix:\n");

	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d \t",total[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
