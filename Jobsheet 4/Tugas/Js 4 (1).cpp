// created by Devani (23343033)

#include<stdio.h>

int main(){
	int jj, sj;
	int mm, sm;
	int dd, w;
	
	printf("masukkan jumlah waktu dalam detik: ");
	scanf("%d", &w);
	
	jj = w / 3600;
	sj = w % 3600;
	mm = sj / 60;
	dd = sj % 60;

	printf("hasil konversi waktu: %djam, %dmenit, %ddetik", jj, mm, dd);
	
	return 0;
}
