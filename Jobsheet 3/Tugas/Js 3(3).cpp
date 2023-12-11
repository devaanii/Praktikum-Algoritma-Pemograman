// created by Devani (23343033)

#include <stdio.h>

int main(){
	double const PI = 3.14;
	double d, r, LP, volume;
	
	printf("Masukkan jari-jari lingkaran: ");
	scanf("%lf", &r);
	
	LP = 4.0 * PI * r * r;
	volume = (4.0 / 3.0) * PI * r * r* r;
	
	printf("\nNilai Luas Permukaan: %.2lf", LP);
	printf("\nNilai Volume: %.2lf", volume);
	  
	return 0;
	
	
	
}