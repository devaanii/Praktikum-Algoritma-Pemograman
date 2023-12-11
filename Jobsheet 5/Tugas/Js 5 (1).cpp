// created by Devani (23343033)

#include<stdio.h>

int main(){
	double a, b, hj, hk, hp, hb;
	int op, hbb, aa,bb; 
	
	printf("\t\t=== Kalkulator Sederhana ===\n\n");
	printf("\nPilih Operator yang akan digunakan \n1) Penjumlahan \n2) Pengurangan \n3) Perkalian \n4) Pembagian \n5) Hasil Bagi");
	
	printf("\n\nPilih Operator: ");
	scanf("%i", &op);
	
	switch(op){
		case 1:
			printf("Masukkan dua bilangan yang akan dioperasikan: ");
			scanf("%lf %lf", &a, &b);
			
			hj = a + b;
			
			printf("%.2lf + %.2lf = %.2lf ", a, b, hj);
			break;
			
		case 2:
			printf("Masukkan dua bilangan yang akan dioperasikan: ");
			scanf("%lf %lf", &a, &b);
			
			hk = a - b;
			
			printf("%.2lf - %.2lf = %.2lf", a, b, hk);
			break;
		case 3:
			printf("Masukkan dua bilangan yang akan dioperasikan: ");
			scanf("%lf %lf", &a, &b);
			
			hp = a * b;
			
			printf("%.2lf x %.2lf = %.2lf", a, b, hp);
			break;
		case 4:
			printf("Masukkan dua bilangan yang akan dioperasikan: ");
			scanf("%lf %lf", &a, &b);
			if (b!=0){
				
				hb = a / b;
				printf("%.2lf / %.2lf = %.2lf", a, b, hb);
			}else{
				printf("Eror!");
			}
			break;
		case 5:
			printf("Masukkan dua bilangan yang akan dioperasikan: ");
			scanf("%i %i", &aa, &bb);
			
			hbb = aa % bb;
			
			printf("sisa bagi dari %i dan %i = %i", aa, bb, hbb);
			break;
			
		default:
			printf("Operator tidak valid");
}
	return 0;
}