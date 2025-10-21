#include<stdio.h>

int main(){
	
	int input;
	int batasbawah, batasatas;
	
	scanf("%d", &input);
	scanf("%d %d", &batasbawah, &batasatas);
	
	if(input >= batasbawah && input <= batasatas){
		printf("%d di antara %d dan %d", input, batasbawah, batasatas);
	}
	else
		printf("%d bukan di antara %d dan %d", input, batasbawah, batasatas);
	
	return 0;
}
