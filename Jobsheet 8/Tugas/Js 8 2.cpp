#include<stdio.h>


float a, b, hasil;
void perkalian(){
	hasil = a * b;
	printf("Hasil dari perkalian %.1lf dan %.1lf = %.1lf\n\n", a,b, hasil);
}

void pembagian(){
	hasil = a / b;
	printf("Hasil dari pembagian %.1lf dan %.1lf = %.1lf\n\n", a,b, hasil);
}

void penjumlahan(){
	hasil = a + b;
	printf("Hasil dari penjumlahan %.1lf dan %.1lf = %.1lf\n\n", a,b, hasil);
}

void pengurangan(){
	hasil = a - b;
}

int main(){
	int menu;
	
	
	do{
		printf("\t\t\t=====Program Kalkulator sederhana=====\n");
		printf("Masukkan nilai angka pertama: ");
		scanf("%f", &a);
		printf("Masukkan nilai angka kedua: ");
		scanf("%f", &b);
            printf("\n\nMenu Kalkulator");
            printf("\n\n1. Penjumlahan");
            printf("\n2. Pengurangan\n");
            printf("3. Perkalian\n");
            printf("4. Pembagian\n\n");
            printf("5. Exit\n\n");
			printf("Pilih Menu: ");
            scanf("%d", &menu);

            switch(menu) {
                case 1:
                    penjumlahan();
                    break;

                case 2:
                    pengurangan();
                    break;

                case 3:
                    perkalian();
                    break;
				
				case 4: 
					pembagian();
					
                case 5:
                    printf("\n\nTerima kasih!!");
                    break;

                default:
                    printf("Maaf! Pilihan anda tidak valid. Mohon di coba lagi!");
            }  menu = 0;
        }while (menu != 5);
        return 0;
    } 
