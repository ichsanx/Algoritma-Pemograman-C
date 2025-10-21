#include<stdio.h>

int main (){
	
//	SELECTION
	/*
		1. If, else if, else
		2. Switch case
		3. Ternary if
	*/
	
//	1. If, else if, else
	//Kalau angka 0 maka print "nol", kalau angka ganjil print "ganjil"
	//Kalau angka genap print "genap"
	
//	int angka = 0;
//	if (angka == 0){
//		printf("nol");
//	}
//	else if (angka%2==1){
//		printf("ganjil");
//	}
//	else{
//		printf("genap");
//	}
	
	
//	2. Switch case
//	int angka = 3;
//	switch(angka){
//		case 0:
//			printf("nol");
//			break;
//		case 1: //angka == 1
//			printf("satu");
//			break; 
//		case 5:
//			printf("lima");
//			break;
//		default:
//			printf("Selain nol satu dan lima");
//			
//	}
	
	
//	3. Ternary baik untuk yg pendek
	int angka = 1;
	
	//kondisi ? benar : salah
//	printf("%s", (angka%2 == 0? "genap" : "ganjil"));
	
	printf("%s", (angka < 2 ? "lebih kecil dari 2" :
					angka > 2 ? "lebih besar dari 2" : "2"));
	
	
	return 0;
}
