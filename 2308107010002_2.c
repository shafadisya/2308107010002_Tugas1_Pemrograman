#include <stdio.h>

int main() {
    int tahun;

    // Meminta input tahun dari pengguna
    while (1) {
        printf("Masukkan tahun (format: YYYY): ");
        if (scanf("%d", &tahun) != 1) {
            while (getchar() != '\n'); // Membersihkan input buffer
            printf("Input harus berupa bilangan. Silakan coba lagi.\n");
        } else if (tahun < 1000 || tahun > 9999) {
            printf("Tahun harus terdiri dari 4 angka. Silakan coba lagi.\n");
        } else {
            break;
        }
    }

    // Memeriksa apakah tahun kabisat atau bukan
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        printf("%d adalah tahun kabisat.\n", tahun);
    } else {
        printf("%d bukan tahun kabisat.\n", tahun);
    }

    return 0;
}

