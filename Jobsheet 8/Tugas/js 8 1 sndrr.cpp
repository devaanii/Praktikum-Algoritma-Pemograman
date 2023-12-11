#include<stdio.h>


int main(){
	int a, b;
	printf("Masukkan angka pertama: ");
	scanf("%d", &a);
	printf("Masukkan angka kedua: ");
	scanf("%d", &b);
	
	int hasil = rekursifkali(a,b);
	printf("Hasil perkalian %d x %d = %d\n", a,b,hasil);
	return 0;
}

int rekursifkali(int angka1, int angka2){n
	
	if(angka1 == 0|| angka2 == 0){
		return 0;
	} else{
		return angka1 + rekursifkali(angka1, angka2 - 1); 
	}
}

