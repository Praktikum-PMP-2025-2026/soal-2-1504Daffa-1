// Nama : Daffa Rafandy Tarigan
// NIM : 13224068
// Source Code untuk praktikum modul 4- Dynamics Structure 
// Soal yang dipilih: Soal Nomor 2
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000]; //maksimal panjang string 1000 karakter
    memset(s, 0, sizeof(s)); // inisialisasi string
    if (scanf("%s", s) != 1) {
        return 1;
    }
    int panjang = strlen(s);
    // Hapus kondisi return 0 untuk panjang == 0 agar tetap output "0"
    int butuhdipasangkan = 0, belumdipasangkan = 0;
// menghitung jumlah tanda kurung yang belum dipasangkan dan yang sudah dipasangkan
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


