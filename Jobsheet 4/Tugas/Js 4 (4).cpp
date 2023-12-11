// created by Devani (23343033)

#include<stdio.h>

int main(){
	int jam, tarif;
	
	printf("\t\t== Program Tarif Rental Film ==");
	
	printf("\n\nTotal durasi rental film (dalam jam)= ");
	scanf("%d", &jam);
	
	jam--;
	tarif = (jam * 7500) + 15000;
	
	printf("Tarif rental film= Rp.%d", tarif);
	 return 0;
}