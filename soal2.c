/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 1
 *   Hari dan Tanggal    : 15 April 2026
 *   Nama (NIM)          : Zulfan Hanani (13224105)
 *   Nama File           : soal2.c
 *   Deskripsi           : Kode Batu Stabil
 *                         Membuat program untuk menentukan jumlah langkah pada transformasi sebuah bilangan hingga ke angka 1
 * 
 */

 #include <stdio.h>

 void transformasi(int n, int *langkah){
    if (n % 2 == 0){
        (*langkah)++;
        transformasi(n/2, langkah);
    }else if (n % 2 == 1 && n > 1){
        (*langkah)++;
        transformasi(3*n+1, langkah);
    }else{
        return;
    }
 }
  
 int main() {
    int T;
    scanf("%d", &T);
    int n[T], langkah[T];
    for (int i = 0; i < T; i++){
        scanf("%d", &n[i]);
        langkah[i] = 0;
    }
    for (int i = 0; i < T; i++){
        transformasi(n[i], &langkah[i]);
        printf("LANGKAH %d\n", langkah[i]);
    }
    return 0;
 }
