#include<stdio.h>

int belanja;
int hargaakhir;

void potong(){
	if(belanja < 1000000){
		printf("Besar diskon				: 0 persen");
		printf("\nBesar Yang Harus Dibayarkan		: %d", belanja);
	} else if(belanja>=1000000 && belanja < 3000000){
		printf("Besar diskon				: 20 persen");
		hargaakhir = 0.8 * belanja;
		printf("\nBesar Yang Harus Dibayarkan		: %d", hargaakhir);
	}else{
		printf("Besar diskon				: 35 persen");
		hargaakhir = 0.65 * belanja;
		printf("\nBesar Yang Harus Dibayarkan		: %d", hargaakhir);
	}
}

int main(){
	printf("\n\t\t===Program Kasir===\n\n");
	printf("Masukkan Total Pembelian (Rp.)		: ");
	scanf("%i", &belanja);
	potong();
	return 0;
}