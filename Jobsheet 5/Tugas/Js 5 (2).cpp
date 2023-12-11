// created by Devani (23343033)

#include<stdio.h>

int main(){
	int Totbeli, hakhir;
	
	printf("\t\t=== TOSERBA ===\n\n");
	printf("Masukkan Total Pembelian Anda: ");
	scanf("%i", &Totbeli);
	
	if(Totbeli <= 75000){
		printf("\t\nSelamat anda mendapatkan diskon sebesar 5 persen ! \n");
		hakhir = Totbeli * 0.95;
		printf("\nTotal Belanja anda menjadi: Rp %i", hakhir);
	}else if(Totbeli >= 75000 && Totbeli < 125000){
		printf("\t\nSelamat anda mendapatkan diskon sebesar 15 persen! \n");
		hakhir = Totbeli * 0.85;
		printf("\nTotal Belanja anda menjadi: Rp %i", hakhir);
	}else if(Totbeli >=125000){
		printf("\t\nSelamat anda mendapatkan diskon sebesar 25 persen dan Cashback sebesar Rp 5.000,00!");
		hakhir = Totbeli * 0.75;
		printf("\nTotal Belanja anda menjadi: Rp %i", hakhir);
	}else{
		printf("Maaf! Ada kesalahan. Silahkan di coba lagi!");
	}

	return 0;
	
}