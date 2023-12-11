#include <stdio.h>

int main() {
    char str[] = "BORLAND";
    char *ptrstr = str;

    // Loop untuk mengakses karakter dari kanan ke kiri
    for (int i = 6; i >= 0; i--) {
        // Loop untuk mencetak karakter dari posisi saat ini hingga akhir
        for (int j = i; j <= 6; j++) {
            printf("%c", *(ptrstr + j));
        }
        printf("\n");
    }

    return 0;
}
