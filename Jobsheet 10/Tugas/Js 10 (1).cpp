#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char main;
    do {
        // Inisialisasi generator nomor acak
        srand(time(NULL));

        // Menghasilkan nomor acak antara 1 dan 20
        int targetNumber = rand() % 20 + 1;

        int guess, attempts = 0;
        printf("Selamat datang di permainan tebak nomor!\n");

        do {
            // Minta pemain menebak nomor
            printf("Tebak nomor antara 1 dan 20: ");
            scanf("%d", &guess);

            // Periksa apakah tebakan benar, lebih besar, atau lebih kecil
            if (guess == targetNumber) {
                printf("Selamat, Anda benar!\n");
            } else if (guess < targetNumber) {
                printf("Nomor saya lebih besar!\n");
            } else {
                printf("Nomor saya lebih kecil!\n");
            }

            attempts++;

        } while (guess != targetNumber);

        // Menampilkan jumlah percobaan yang diperlukan
        printf("Anda berhasil menebak dalam %d percobaan.\n", attempts);

        // Menanyakan apakah ingin bermain lagi
        printf("Mau bermain lagi? (y/n): ");
        scanf(" %c", &main);

    } while (main == 'y' || main == 'Y');

    printf("Terima kasih telah bermain!\n");

    return 0;
}