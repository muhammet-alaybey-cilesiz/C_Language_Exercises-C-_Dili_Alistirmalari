#include <stdio.h>

// Matrix Logic
// Matris Mantığı

int main(){
	int Row, Column ;   // Row(Satır)  Column(Sütun)

	printf("Row: ");
	scanf("%d",&Row);
	printf("Column: ");
	scanf("%d",&Column);

	int matrix[Row][Column] ={};
	
	for(int i=0; i<Row; i++){
		for(int j=0; j<Column; j++){
			printf("[%d][%d] Enter value: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}

	for(int i=0; i<Row; i++){
		for(int j=0; j<Column; j++){
			printf("%d,",matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}
