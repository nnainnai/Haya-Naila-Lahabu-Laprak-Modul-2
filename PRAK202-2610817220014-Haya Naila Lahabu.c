#include <stdio.h>

int main() {
    float nilai_pertama, nilai_kedua, jumlah;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai_pertama);

    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nilai_kedua);

    jumlah = nilai_pertama + nilai_kedua;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", nilai_pertama, nilai_kedua, jumlah);

    return 0;
}