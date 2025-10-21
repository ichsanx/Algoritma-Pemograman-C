#include<stdio.h>

int main(){
	
	//repetition/looping
	//for, while, do while
	
	//seleisih 1
//	for(int i = 1; i <= 10; i++){
//		printf("%d\n", i);
//	}
	
//	//selisih 2 begitu juga seterusnya
//	for(int i = 1; i <= 10; i += 2){
//		printf("%d\n", i);
//	}
	
//	//break
//	for(int i = 1; i <= 10; i += 2){
//		if(i == 5) break;
//		printf("%d\n", i);
//	}
	
	
//	//continue
//	for(int i = 1; i <= 10; i += 2){
//		if(i == 5) continue;
//		printf("%d\n", i);
//	}


	
//	//while 
//	int j = 1;
//	while(j <=10){
//		printf("%d\n", j++);
//	}
//
//	//do while
//	int k = 1;
//	do{
//		printf("%d\n", k++);
//	}while(k <=10);
	
	
//	//do while = bisa bejalan selama angka while sama lebih kecil dari do while "K", sebaliknya do while tidak perduli kondisi demikian
//	//while
//	printf("while:\n"); 
//	int j = 11;
//	while(j <=10){
//		printf("%d\n", j++);
//	}
//
//	//do while
//	printf("do while:\n");
//	int k = 11;
//	do{
//		printf("%d\n", k++);
//	}while(k <=10);


//	//nested loop
//	int size = 10;
//	for(int i = 0; i < size; i++){
//		for(int j = 0; j < size; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
	
	
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
