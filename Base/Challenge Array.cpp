#include<stdio.h>
#include<string.h>

int main(){

	//challenge kata besarkecil menjadi besar semua
	
//	//ASCII
//	printf("%d\n", 'a');
//	printf("%d\n", 'z');
//	printf("%d\n", 'A');
//	printf("%d\n", 'Z');


//	//cara 1 ubah ke kapital huruf dari kecil
//	char str[30];
//	
//	scanf("%[^\n]", str);
//	getchar();
//	
//	int panjang = strlen(str);
//	
//	for(int i = 0; i <panjang; i++){
//		if(str[i] >= 'a' && str[i] <= 'z'){
//			str[i] -= 32;
//		}
//	}
//	printf("%s", str);
	


	
//	//cara 2 ubah ke kapital huruf dari kecil
//	char str[30];
//	
//	scanf("%[^\n]", str);
//	getchar();
//	
//	int panjang = strlen(str);
//	
////	for(int i = 0; i <panjang; i++){
////		if(str[i] >= 'a' && str[i] <= 'z'){
////			str[i] -= 32;
////		}
////	}
//	printf("%s", strupr(str));



	//cara 2 ubah ke kecil dari kapital huruf
	char str[30];
	
	scanf("%[^\n]", str);
	getchar();
	
	int panjang = strlen(str);
	
	printf("%s", strlwr(str));

	
	return 0;
}
