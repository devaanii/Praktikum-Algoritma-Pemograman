// created by Devani (23343033)

#include<stdio.h>

int main(){
	int pre, prak, uts, uas; 
	double nakhir;
	
	printf("\t\t== Program Menghitung Nilai Akhir ==");
	
	printf("\n\nNilai Presensi= ");
	scanf("%d", &pre);
	
	printf("Nilai Praktek= ");
	scanf("%d", &prak);
	
	printf("Nilai UTS= ");
	scanf("%d", &uts);
	
	printf("Nilai UAS= ");
	scanf("%d", &uas);
	
	nakhir = (0.1 * pre) + (0.2 * prak) + (0.3 * uts) + (0.4 * uas);
	
	printf("\nNilai Akhir= %.2lf", nakhir);
	
	return 0;
	
}