// created by Devani (23343033)

#include<stdio.h>

int main(){
	
	double rupiah, dollar;
	
	printf("== Konversi mata uang Rupiah ke Dollar ==\n");
	printf("\nMasukkan nominal uang (dalam rupiah): ");
	scanf("%lf", &rupiah);
	
	dollar = rupiah / 14250.0;
	  
	printf("Jumlah nominal uang (dalam dollar): $ %.2lf ", dollar);
	
	return 0; 
}