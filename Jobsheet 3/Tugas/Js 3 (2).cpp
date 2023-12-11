// created by Devani (23343033)

#include<stdio.h>

int main (){
	
	double c, k, r, f, suhu;
	
	printf("\t\t== Konversi Suhu == ");
	printf("\n\nInput suhu (dalam celcius): ");
	scanf("%lf", &c);
	
	k = c + 273.15;
	f = (c * 1.8) + 32.0;
	r = c * 0.8;
	
	printf ("\nSuhu dalam kelvin: %.2lf", k);
	printf ("\nSuhu dalam reamur: %.2lf", r);
	printf ("\nSuhu dalam fahrenheit: %.2lf", f);
	
	return 0;
	
}