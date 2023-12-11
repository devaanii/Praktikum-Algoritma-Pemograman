// created by Devani (23343033)

#include<stdio.h>

int main(){
	
	for(int i=1 ; i<=5; i++){
		int multiplier = 1;
		for(int j=1; j<=i; j++){
			printf("%i ", i*multiplier);
			multiplier++;
		}
		printf("\n");
	}
	return 0;
}