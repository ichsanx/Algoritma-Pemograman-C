#include<stdio.h>

int main(){
	//nested loop
	int size = 10;
	scanf("%d", &size);
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if(i == 0 || i == size-1 || j == 0 || j == size-1){
				printf("*");
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	
	
	return 0;
}
