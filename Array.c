#include <stdio.h>

int main() {
// Deklarasi array untuk menyimpan 10 nilai
int nilai[10];
int i;

    printf("===== Maulana Yusuf - UAS =====\n");
    printf("===============================\n");
    printf("PROGRAM MENAMPILKAN NILAI ARRAY\n");
    printf("===============================\n\n");


// Perulangan untuk meminta input 10 nilai
for (i = 0; i < 10; i++) {
printf("Masukkan nilai ke-%d: ", i + 1);
scanf("%d", &nilai[i]);
}

// Perulangan untuk mengecek setiap nilai dalam array
for (i = 0; i < 10; i++) {
// Jika nilai lebih besar atau sama dengan 60, maka tampilkan nilai tersebut
if (nilai[i] >= 60) {
printf("%d ", nilai[i]);
}
}

return 0;
}
