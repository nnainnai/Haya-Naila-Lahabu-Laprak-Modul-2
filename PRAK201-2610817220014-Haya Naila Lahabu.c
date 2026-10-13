#include <stdio.h>

int main() {
    // Deklarasi variabel untuk menyimpan biodata
    char nama[100];
    char nim[50];
    char kelas_paralel[50];
    char ttl[100];
    char alamat[150];
    char hobby[50];
    char no_hp[30];

    // Bagian Input Biodata
    printf("=== MASUKKAN BIODATA ANDA ===\n");
    
    printf("Nama               : ");
    scanf(" %[^\n]", nama);

    printf("NIM                : ");
    scanf(" %[^\n]", nim);

    printf("Kelas Paralel      : ");
    scanf(" %[^\n]", kelas_paralel);

    printf("Tempat/Tanggal Lahir : ");
    scanf(" %[^\n]", ttl);

    printf("Alamat             : ");
    scanf(" %[^\n]", alamat);

    printf("Hobby              : ");
    scanf(" %[^\n]", hobby);

    printf("No. HP             : ");
    scanf(" %[^\n]", no_hp);

    // Bagian Output Biodata
    printf("\n========================================\n");
    printf("             OUTPUT BIODATA             \n");
    printf("========================================\n");
    
    printf("Nama               : %s\n", nama);
    printf("NIM                : %s\n", nim);
    printf("Kelas Paralel      : %s\n", kelas_paralel);
    printf("Tempat/Tanggal Lahir : %s\n", ttl);
    printf("Alamat             : %s\n", alamat);
    printf("Hobby              : %s\n", hobby);
    printf("No. HP             : %s\n", no_hp);
    printf("========================================\n");

    return 0;
}