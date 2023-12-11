// created by Devani (23343033)


#include<stdio.h>

int saldo = 175000;
//const int saldomin = 50000;

void ceksaldo() {
    printf("\n\nSaldo anda saat ini: %d", saldo);
}

void setoranuang() {
    int setoran;
    printf("Masukkan nominal uang yang akan anda setor: ");
    scanf("%d", &setoran);
    saldo += setoran;
    printf("Transaksi Berhasil!");
}

void penarikanTunai() {
	int sisasaldo;
	int tariktunai;
	const int saldomin = 50000;
	//sisasaldo!=saldomin;
	//sisasaldo=saldo;
	
	printf("Masukkan nominal uang: ");
	scanf("%d", &tariktunai);
	sisasaldo = saldo - tariktunai;
	//sisasaldo -= tariktunai;
	if(sisasaldo >= saldomin){
		saldo = sisasaldo;
		//sisasaldo -= tariktunai;
		printf("sisa saldo anda: %d", saldo);
	} else {
		printf("Maaf! Penarikan Tunai gagal karena nominal tabungan anda telah mencapai limit minimal tabungan");
	}
	printf("\n");
}

void menuatm() {
    int norek;   
    char namaakun[50];       
    printf("\n=============Selamat Datang di Program ATM================");
    printf("\n\nNo. Rekening: ");
    scanf("%d", &norek);
    printf("Nama Akun ATM: ");
    scanf("%s", &namaakun);

}

int main() {
    int lanjut;
    do {
        menuatm();
        printf("Ketik '1' jika anda ingin melanjutkan transaksi: ");
  		scanf("%i", &lanjut);
  		
        if (lanjut != 1) {
            printf("Terima kasih telah berkunjung!");
        } else {
            int menu;

            printf("\n\nMenu ATM");
            printf("\n\n1. Cek Saldo\n");
            printf("2. Setoran\n");
            printf("3. Penarikan Tunai\n");
            printf("4. Exit\n\n");
            printf("Pilih Menu: ");
            scanf("%d", &menu);

            switch(menu) {
                case 1:
                    ceksaldo();
                    break;

                case 2:
                    setoranuang();
                    break;

                case 3:
                    penarikanTunai();
                    break;

                case 4:
                    printf("\n\nTerima kasih telah berkunjung! Have a nice day!");
                    break;

                default:
                    printf("Maaf! Pilihan anda tidak valid. Mohon di coba lagi!");
            }  menu = 0;
        }
    } while (lanjut != 4);

    return 0;
}
