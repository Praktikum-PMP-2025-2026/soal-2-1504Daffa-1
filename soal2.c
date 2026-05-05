// Nama : Daffa Rafandy Tarigan
// NIM : 13224068
// Source Code untuk praktikum modul 4- Dynamics Structure 
// Soal yang dipilih: Soal Nomor 2

#include <stdio.h>

int main() {
    char s[1000]; //stringnya maksimal 1000 karakter
    scanf("%s", s);
    //disini saya pake dua variabel buat ngitung berapa banyak tanda kurung yang belum dipasangkan dan berapa banyak yang butuh dipasangkan
    int butuhdipasangkan = 0, belumdipasangkan = 0;

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
    //hasilnya dijumlahkn
    printf("%d\n", butuhdipasangkan + belumdipasangkan);

    return 0;
}
