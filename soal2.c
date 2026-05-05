// Nama : Daffa Rafandy Tarigan
// NIM : 13224068
// Source Code untuk praktikum modul 4- Dynamics Structure 
// Soal yang dipilih: Soal Nomor 2

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
// membaca input string
    if (fgets(s, sizeof(s), stdin) == NULL) {
        printf("0\n");
        return 0;
    }

    s[strcspn(s, "\n")] = '\0';

    int butuhdipasangkan = 0, belumdipasangkan = 0;
// menghitung jumlah kurung yang belum dan sudah dipasankan
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            belumdipasangkan++;
        } else if (s[i] == ')') {
            if (belumdipasangkan > 0) {
                belumdipasangkan--;
            } else {
                butuhdipasangkan++;
            }
        }
    }
    printf("%d\n", butuhdipasangkan + belumdipasangkan);
    return 0;
}
