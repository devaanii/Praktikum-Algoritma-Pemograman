// created by Devani (23343033)

#include<stdio.h>

int main(){
	printf("\t\t=== Program Menampilkan deret ===\n");
	
	printf("Deret Bilangan Genap\n");
	for(int i=0; i<=50; i+=2){
		printf("%i ", i);	
	}
	printf("\n\nDeret Bilangan Ganjil\n");
	for(int i=1; i<=49; i+=2){
		printf("%i ", i);
	}
	return 0;
}