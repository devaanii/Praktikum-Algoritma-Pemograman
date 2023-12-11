#include<stdio.h>

int main(){
	int n;
	int jmlhnilai;
	float ratarata;
	int nMHS[20];
	
	for(int n = 0; n<20; n++){
		printf("Masukkan nilai mahasiswa ke-%d: ", n+1);
		scanf("%d", &nMHS[n]);
	}

	for (n = 0; n<20; n++){
		jmlhnilai += nMHS[n];
	}
	ratarata = jmlhnilai / 20;
	printf("Rata-rata nilai mahasiswa anda adalah %.2lf", ratarata);
	
	return 0;
}