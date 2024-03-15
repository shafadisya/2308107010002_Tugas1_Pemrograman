#include <stdio.h>

int main() {
    int pilihan;
    long int bilangan;

    printf("Pilih operasi konversi yang ingin anda lakukan:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
            printf("Masukkan bilangan desimal: ");
            scanf("%ld", &bilangan);

            // Konversi dari Desimal ke Biner
            {
                long int binaryNumber = 0, base = 1;
                int A;

                while (bilangan > 0) {
                    A = bilangan % 2;
                    binaryNumber = binaryNumber + A * base;
                    bilangan = bilangan / 2;
                    base = base * 10;
                }

                printf("Biner: %ld\n", binaryNumber);
            }
            break;

        case 2:
            printf("Masukkan bilangan biner: ");
            scanf("%ld", &bilangan);

            // Konversi dari Biner ke Desimal
            {
                long int decimalNumber = 0, base = 1, B;

                while (bilangan > 0) {
                    B= bilangan % 10;
                    decimalNumber += B * base;
                    base = base * 2;
                    bilangan = bilangan / 10;
                }

                printf("Desimal: %ld\n", decimalNumber);
            }
            break;

        case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%ld", &bilangan);

            // Konversi dari Desimal ke Octal
            {
                long int octalNumber = 0, base = 1;
                int A;

                while (bilangan > 0) {
                    A = bilangan % 8;
                    octalNumber = octalNumber + A * base;
                    bilangan = bilangan / 8;
                    base = base * 10;
                }

                printf("Octal: %ld\n", octalNumber);
            }
            break;

        case 4:
            printf("Masukkan bilangan octal: ");
            scanf("%ld", &bilangan);

            // Konversi dari Octal ke Desimal
            {
                long int decimalNumber = 0, base = 1, B;

                while (bilangan > 0) {
                    B = bilangan % 10;
                    decimalNumber += B * base;
                    base = base * 8;
                    bilangan = bilangan / 10;
                }

                printf("Desimal: %ld\n", decimalNumber);
            }
            break;

        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
