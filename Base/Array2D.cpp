#include<stdio.h>

int main(){
	
	int matrix[3][3];
	int barisPertama = 0;
//	int barisVertical = 0;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < 3; i++){
		barisPertama += matrix[0][i];
	}
	
//	for(int j = 0; j <3; j++){
//		barisVertical += matrix[0][j];
//	}
	
	printf("Hasil output baris pertama : %d\n", barisPertama);
//	printf("Hasil output baris pertama menurun : %d\n", barisVertical);
	
	return 0;
}
