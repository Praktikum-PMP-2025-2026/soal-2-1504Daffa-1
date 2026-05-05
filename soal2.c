// Nama : Daffa Rafandy Tarigan
// NIM : 13224068
// Source Code untuk praktikum modul 4- Dynamics Structure 
// Soal yang dipilih: Soal Nomor 2

#include <stdio.h>

int main() {
    char s[1000]; //maksimal panjang string 1000 karakter
    if (scanf("%s", s) != 1) {
        return 1;
    }
    int butuhdipasangkan = 0, belumdipasangkan = 0;
// menghitung jumlah tanda kurung yang belum dipasangkan dan yang sudah dipasnagkan
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            belumdipasangkan++;
        } else {
            if (belumdipasangkan > 0) {
                belumdipasangkan--;
            } else {
                butuhdipasangkan++;
            }
        }
    }
    if (butuhdipasangkan == 0 && belumdipasangkan == 0) {
        printf("0");
    } else {
        printf("%d\n", butuhdipasangkan + belumdipasangkan);
    }

    return 0;
}
