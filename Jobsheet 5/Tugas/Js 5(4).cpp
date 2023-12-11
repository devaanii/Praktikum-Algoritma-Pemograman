// created by Devani (23343033)

#include<stdio.h>

int main(){
	int nk, nt, nuts, nuas, nakhir;
	
	
	printf("\t\t== Program Menghitung Nilai Akhir Mahasiswa ==\n\n");
	printf("Nilai Kehadiran: ");
	scanf("%i", &nk);
	printf("Nilai Tugas: ");
	scanf("%i", &nt);
	printf("Nilai UTS: ");
	scanf("%i", &nuts);
	printf("Nilai UAS: ");
	scanf("%i", &nuas);  
	
	nakhir = ((nk * 0.2) + (nt * 0.2) + (nuts * 0.25) + (nuas * 0.35));
	printf("Nilai akhir anda: %i", nakhir);
	
	if(nakhir > 0 && nakhir <= 44){
		printf("\nNilai akhir= E");
		printf("\nMaaf! Anda tidak lulus!");
	}else if(nakhir>=45 && nakhir<=55){
		printf("\nNilai akhir= D");
		printf("\nMaaf! Anda tidak lulus!");
	}else if(nakhir>=56 && nakhir<=65){
		printf("\nNilai akhir= C");
		printf("\nAnda lulus, tingkatkan lagi untuk kedepannya!");
	}else if(nakhir>=66 && nakhir<=75){
		printf("\nNilai akhir= B-");
		printf("\nAnda lulus dengan baik, tingkatkan terus belajarnya!");
	}else if(nakhir>=76 && nakhir<=80){
		printf("\nNilai akhir= B");
		printf("\nAnda lulus dengan baik, tingkatkan terus belajarnya!");
	}else if(nakhir>=81 && nakhir<=85){
		printf("\nNilai akhir= B+");
		printf("\nAnda lulus dengan baik, tingkatkan terus belajarnya!");
	}else if(nakhir>=86 && nakhir<=90){
		printf("\nNilai akhir= A-");
		printf("\nSelamat! Anda lulus dengan nilai yang sangat memuaskan!");
	}else if(nakhir>=91 && nakhir<=100){
		printf("\nNilai akhir= A+");
		printf("\nSelamat! Anda lulus dengan nilai yang sangat memuaskan!");
	}else{
		printf("\nAda kesalahan! Silahkan ananda coba lagi!");
	}
	return 0;
}