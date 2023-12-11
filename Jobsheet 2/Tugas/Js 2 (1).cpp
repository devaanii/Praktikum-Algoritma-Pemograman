/* created by DEVANI
NIM: 23343033
1. Program menampilkan tulisan "Hello, siapa nama lengkapmu?"
2. Pengguna mengimputkan nama lengkap <nama>
3. Menampilkan pesan "Selamat Datang <nama> dalam Pemograman C!"
*/


#include <stdio.h>

int main(){
	
	char nama;
	
	printf("Hello, siapa nama lengkapmu?\n");
	
	printf("input nama: ");
	scanf("%[^\n]s", &nama);
	
	printf("\n\t Selamat Datang %s dalam pemograman C!", &nama);
	
	return 0;
}