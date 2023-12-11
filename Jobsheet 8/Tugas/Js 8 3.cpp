#include<stdio.h>

int r;
float hasil;

void klllingkaran(){
	hasil = 2 * 3.14 * r;
	printf("\nKeliling Lingkaran= %.2lf\n\n", hasil);
}

void luaslingkaran(){
	hasil = 3.14* r* r;
	printf("Luas Lingkaran= %.2lf\n\n", hasil);
}
int main(){
	printf("\t\t\t===Program Menghitung Keliling dan Luas Lingkaran===\n");
	printf("Masukkan nilai jari-jari lingkaran= ");
	scanf("%d", &r);
	klllingkaran();
	luaslingkaran();
	return 0;
}

