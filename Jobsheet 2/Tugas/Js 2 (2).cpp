// created by Devani (23343033)

#include <stdio.h>

double nP, nUTS, nUAS, nAkhir;

int main(){
	printf("Nama: ");
	scanf("%[^\n]s");
	
	printf("NIM: ");
	scanf("%d");
	
	printf("Prodi: ");
	scanf("%s");
	
	printf("Fakultas: ");
	scanf("%s");
	
	printf("Nilai Praktikum: ");
	scanf("%lf", &nP);
	
	printf("Nilai UTS: ");
	scanf("%lf", &nUTS); 
	
	printf("Nilai UAS: ");
	scanf("%lf", &nUAS); 
	
	nAkhir = (0.3 * nP) + (0.3 * nUTS) + (0.4 * nUAS);
	
	printf("\t\nNilai Akhir: %.2lf\n", nAkhir);
	
	return 0;
	
}