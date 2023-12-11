#include<stdio.h>

int main(){
	int n;
	int i;
	char namaMHS[100][100];
	printf("Banyak nama Mahasiswa yang akan anda inputkan: ");
	scanf("%d", &i);
	
	for (n = 0; n<i; n++){
		printf("Nama Mahasiswa ke-%d: ", n+1);
		scanf("%s", &namaMHS[n]);
	}
	
	printf("\nTampilan data\n");
	for (n = 0; n<i; n++){
	printf("Data Mahasiswa ke-%d: %s\n", n+1, namaMHS[n]);
	}

	return 0;
}