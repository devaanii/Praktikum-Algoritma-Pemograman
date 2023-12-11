// created by Devani (23343033)

#include<stdio.h>

int main(){
	char nama, brg;
	double hargaBrg, total;
	int bykBrg;
	
	printf("Nama Pembeli: ");
	scanf("%[^\n]s", &nama);
	
	printf("Nama Barang: ");
	scanf("%s", &brg);
	
	printf("\nHarga Barang= ");
	scanf("%lf", &hargaBrg);
	
	printf("\nJumlah barang yang dibeli= ");
	scanf("%d", &bykBrg);
	
	total = hargaBrg * bykBrg;
	
	printf("\n\nHarga Total= Rp.%.2lf ", total);

 	return 0;
}