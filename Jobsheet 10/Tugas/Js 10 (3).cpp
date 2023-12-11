// created by Devani (23343033)

#include <stdio.h>


struct Mahasiswa {
    int npmMhs;
    char namaMhs[50];
    char tgllahirMhs[10];
    char alamatMhs[50];
    long long hpMhs;
};

int main() {
    struct Mahasiswa dataMhs[100];
    int jumlahData = 0;
    char tambah;

    do {
        printf("NPM        : ");
        scanf("%d", &dataMhs[jumlahData].npmMhs);

        printf("NAMA       : ");
        scanf(" %[^\n]s", dataMhs[jumlahData].namaMhs);

        printf("TGL LAHIR  : ");
        scanf("%s", dataMhs[jumlahData].tgllahirMhs);

        printf("ALAMAT     : ");
        scanf(" %[^\n]s", dataMhs[jumlahData].alamatMhs);

        printf("HP         : ");
        scanf("%lld", &dataMhs[jumlahData].hpMhs);

        jumlahData++;

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &tambah);

    } while (tambah == 'y' || tambah == 'Y');

    // Menampilkan data mahasiswa
    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < jumlahData; i++) {
        printf("%d %s %s %s %lld\n", dataMhs[i].npmMhs, dataMhs[i].namaMhs, dataMhs[i].tgllahirMhs, dataMhs[i].alamatMhs, dataMhs[i].hpMhs);
    }

    return 0;
}
