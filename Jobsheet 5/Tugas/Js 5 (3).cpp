// created by Devani (23343033)

#include<stdio.h>

int main(){
	int rumus;
	double r, lpbola, p, l, t, lpkubus, sisi, lptabung, lpbalok;
	
	printf("\t\t=== Program Rumus Bangun Ruang ===\n\n");
	printf("Pilihlah rumus yang akan anda gunakan: \n1) Rumus Luas Permukaan Bola \n2) Rumus Luas Permukaan Kubus \n3) Rumus Luas Permukaan Balok \n4) Rumus Luas Permukaan Tabung ");
	printf("\n\nPilihan anda: ");
	scanf("%i", &rumus);
	
	switch(rumus){
		case 1:
			printf("\t\t==Rumus Luas Permukaan Bola==");
			printf("\n\nMasukkan jari-jari bola(cm)= ");
			scanf("%lf", &r);
			lpbola = 4.0 * 3.14 * r * r;
			printf("\nLuas Permukaan Bola= %.2lf cm", lpbola);
			break;
			
		case 2:
			printf("\t\t==Rumus Luas Permukaan Kubus==");
			printf("\n\nMasukkan panjang sisi kubus(cm)= ");
			scanf("%.2lf", &sisi);
			lpkubus = 6.0 * sisi * sisi;
			printf("\nLuas permukaan kubus= %.2lf cm", lpkubus);
			break;
		
		case 3:
			printf("\t\t==Rumus Luas Permukaan Balok==");
			printf("\n\nMasukkan Panjang, lebar, tinggi balok (cm)= ");
			scanf("%lf %lf %lf", &p, &l, &t);
			lpkubus = 2.0 * ((p * l) + (p * t) + (l * t));
			printf("\nLuas permukaan balok= %.2lf cm", lpkubus);
			break;
			
		case 4:
			printf("\t\t==Rumus Luas Permukaan Tabung==");
			printf("\n\nMasukkan tinggi tabung (cm)= ");
			scanf("%lf", &t);
			printf("Masukkan jari-jari tabung (cm)= ");
			scanf("%lf", &r);
			lptabung = 2.0 * 3.14 * r* (r + t);
			printf("\nLuas Permukaan tabung= %.2lf", lptabung);
			break;
		
		default:
			printf("Silahkan coba lagi! Pilihan anda tidak valid!");
			return 1;
	}
	return 0;
}