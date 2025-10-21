#include<stdio.h>

//passing by reference 
int getNumber(){
	//...
	return 5;
}

int sum(int *first, int *second){
	*first = 4;
	int total = *first + *second;
	return total;
}

int main(){

	
	//pointer
//	int a = 0;
//	int *p;
//	p = &a;
//	
//	printf("%d\n", &a);
//	printf("%d\n", &p);

	int a = getNumber();
//	printf("%d\n", getNumber());
	int first = 3;
	int second = 5;
	int hasilSum = sum(&first, &second);
//	printf("%d\n", hasilSum);
	printf("%d", first);
	
	return 0;
}








//sum
//int getNumber(){
//	//...
//	return 5;
//}
//
//int sum(int first, int second){
//	int total = first + second;
//	return total;
//}
//
//int main(){
//	//pointer
////	int a = 0;
////	int *p;
////	p = &a;
////	
////	printf("%d\n", &a);
////	printf("%d\n", &p);
//
//	int a = getNumber();
//	printf("%d\n", getNumber());
//	int hasilSum = sum(3,5);
//	printf("%d\n", hasilSum);
//	
//	return 0;
//}



//void printHelloWorld(){
//	printf("Hello World!");
//}
//
//int main(){
//	
//	//pointer
////	int a = 0;
////	int *p;
////	p = &a;
////	
////	printf("%d\n", &a);
////	printf("%d\n", &p);
//
//	printHelloWorld();
//	
//	return 0;
//}
