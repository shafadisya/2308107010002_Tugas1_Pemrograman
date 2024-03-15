##SOAL NO 1##

1. ```#include <stdio.h>```: Baris ini adalah preprocessor directive yang mengarahkan kompilator untuk memasukkan library standar input-output (stdio.h) yang diperlukan untuk fungsi-fungsi input-output standar seperti `printf()` dan `scanf()`.
2. `int main() {`: Ini adalah awal dari fungsi utama program.
3. `int pilihan; long int bilangan;`: Mendeklarasikan dua variabel, `pilihan` untuk menyimpan pilihan menu yang dimasukkan pengguna, dan `bilangan` untuk menyimpan nilai bilangan yang dimasukkan pengguna.
4. ```printf("Pilih operasi konversi yang ingin anda lakukan:\n");```: Mencetak pesan ke layar untuk meminta pengguna memilih operasi konversi yang diinginkan.
5. ```scanf("%d", &pilihan);```: Meminta pengguna untuk memasukkan pilihan operasi konversi, lalu nilai tersebut disimpan dalam variabel `pilihan`.
6. `switch(pilihan) {`: Memulai struktur kontrol switch-case untuk mengevaluasi nilai `pilihan`.
   
###Case 1: Konversi dari Desimal ke Biner

case 1:
    printf("Masukkan bilangan desimal: ");
    scanf("%ld", &bilangan);

    // Konversi dari Desimal ke Biner
    {
        long int binaryNumber = 0, base = 1;
        int remainder;

        while (bilangan > 0) {
            A = bilangan % 2;
            binaryNumber = binaryNumber + A * base;
            bilangan = bilangan / 2;
            base = base * 10;
        }

        printf("Biner: %ld\n", binaryNumber);
    }
    break;

1. Program meminta pengguna untuk memasukkan bilangan desimal.
2. Variabel `binaryNumber` digunakan untuk menyimpan nilai biner hasil konversi dari bilangan desimal.
3. Variabel `base` digunakan untuk menentukan posisi digit biner (basis 2).
4. Selama `bilangan` (bilangan desimal) masih lebih dari 0, dilakukan iterasi dalam sebuah loop while.
5. Pada setiap iterasi, sisa pembagian `bilangan` dengan 2 (hasil modulo `% 2`) disimpan dalam variabel `A`.
6. `remainder` kemudian dikalikan dengan 'base' dan ditambahkan ke `binaryNumber`.
7. Nilai `bilangan` kemudian dibagi dengan 2 untuk melanjutkan proses konversi.
8. `base` kemudian diperbarui dengan mengalikannya dengan 10, karena kita melakukan konversi dari biner (basis 2) ke desimal (basis 10).
9. Setelah proses iterasi selesai, nilai biner hasil konversi ditampilkan ke layar.
```
### Case 2: Konversi dari Biner ke Desimal
case 2:
    printf("Masukkan bilangan biner: ");
    scanf("%ld", &bilangan);

    // Konversi dari Biner ke Desimal
    {
        long int decimalNumber = 0, base = 1, temp;

        while (bilangan > 0) {
            B = bilangan % 10;
            decimalNumber += B * base;
            base = base * 2;
            bilangan = bilangan / 10;
        }

        printf("Desimal: %ld\n", decimalNumber);
    }
    break;
```
1. Program meminta pengguna untuk memasukkan bilangan biner.
2. Variabel `decimalNumber` digunakan untuk menyimpan nilai desimal hasil konversi dari bilangan biner.
3. Variabel `base` digunakan untuk menentukan posisi digit desimal (basis 10).
4. Selama `bilangan` (bilangan biner) masih lebih dari 0, dilakukan iterasi dalam sebuah loop while.
5. Pada setiap iterasi, digit terakhir dari bilangan biner (yang diperoleh dengan menggunakan modulo `% 10`) disimpan dalam variabel `B`.
6. Digit tersebut kemudian ditambahkan ke `decimalNumber` setelah dikalikan dengan `base`.
7. Nilai `base` kemudian diperbarui dengan mengalikannya dengan 2, karena kita melakukan konversi dari biner (basis 2) ke desimal (basis 10).
8. `bilangan` kemudian dibagi dengan 10 untuk menghapus digit terakhir yang telah diproses dalam konversi.
9. Setelah proses iterasi selesai, nilai desimal hasil konversi ditampilkan ke layar.

### Case 3: Konversi dari Desimal ke Octal
case 3:
    printf("Masukkan bilangan desimal: ");
    scanf("%ld", &bilangan);

    // Konversi dari Desimal ke Octal
    {
        long int octalNumber = 0, base = 1;
        int remainder;

        while (bilangan > 0) {
            A = bilangan % 8;
            octalNumber = octalNumber + A * base;
            bilangan = bilangan / 8;
            base = base * 10;
        }

        printf("Octal: %ld\n", octalNumber);
    }
    break;

1. Program meminta pengguna untuk memasukkan bilangan desimal.
2. Variabel `octalNumber` digunakan untuk menyimpan nilai oktal hasil konversi dari bilangan desimal.
3. Variabel `base` digunakan untuk menentukan posisi digit oktal (basis 8).
4. Selama `bilangan` (bilangan desimal) masih lebih dari 0, dilakukan iterasi dalam sebuah loop while.
5. Pada setiap iterasi, sisa pembagian `bilangan` dengan 8 (hasil modulo `% 8`) disimpan dalam variabel `A`.
6. `A` kemudian dikalikan dengan `base` dan ditambahkan ke `octalNumber`.
7. Nilai `bilangan` kemudian dibagi dengan 8 untuk melanjutkan proses konversi.
8. `base` kemudian diperbarui dengan mengalikannya dengan 10, karena kita melakukan konversi dari oktal (basis 8) ke desimal (basis 10).
9. Setelah proses iterasi selesai, nilai oktal hasil konversi ditampilkan ke layar.
```
### Case 4: Konversi dari Octal ke Desimal
```c
case 4:
    printf("Masukkan bilangan octal: ");
    scanf("%ld", &bilangan);

    // Konversi dari Octal ke Desimal
    {
        long int decimalNumber = 0, base = 1, temp;

        while (bilangan > 0) {
            B = bilangan % 10;
            decimalNumber += B * base;
            base = base * 8;
            bilangan = bilangan / 10;
        }

        printf("Desimal: %ld\n", decimalNumber);
    }
    break;
```
1. Program meminta pengguna untuk memasukkan bilangan oktal.
2. Variabel `decimalNumber` digunakan untuk menyimpan nilai desimal hasil konversi dari bilangan oktal.
3. Variabel `base` digunakan untuk menentukan posisi digit desimal (basis 10).
4. Selama `bilangan` (bilangan oktal) masih lebih dari 0, dilakukan iterasi dalam sebuah loop while.
5. Pada setiap iterasi, digit terakhir dari bilangan oktal (yang diperoleh dengan menggunakan modulo `% 10`) disimpan dalam variabel `B`.
6. Digit tersebut kemudian ditambahkan ke `decimalNumber` setelah dikalikan dengan `base`.
7. Nilai `base` kemudian diperbarui dengan mengalikannya dengan 8, karena kita melakukan konversi dari oktal.

##SOAL 2##
  #include <stdio.h>
  
1. Ini adalah preprocessor directive yang menye `<stdio.h>`, yang diperlukan untuk menggunakan fungsi input-output standar dalam bahasa C seperti `printf()` dan `scanf()`.
   
  int main() {
    int tahun;

3. Di sini, fungsi `main()` didefinisikan. Ini adalah titik masuk utama dari program C. Variabel `tahun` dideklarasikan sebagai variabel untuk menyimpan tahun yang dimasukkan oleh pengguna.

    // Meminta input tahun dari pengguna
    while (1) {
        printf("Masukkan tahun (format: YYYY): ");

4. Program memulai loop tak terbatas (`while (1)`) untuk terus meminta input tahun dari pengguna. Pesan `"Masukkan tahun (format: YYYY): "` dicetak ke layar untuk memberi petunjuk kepada pengguna.

        if (scanf("%d", &tahun) != 1) {
            while (getchar() != '\n'); // Membersihkan input buffer
            printf("Input harus berupa bilangan. Silakan coba lagi.\n");

5. Pertama, program mencoba membaca input menggunakan `scanf()`. Jika `scanf()` gagal membaca angka bulat (`%d`), kondisi `if` akan dieksekusi. Dalam kondisi tersebut, program membersihkan sisa input dari buffer menggunakan `getchar()` dan menampilkan pesan kesalahan kepada pengguna.

        } else if (tahun < 1000 || tahun > 9999) {
            printf("Tahun harus terdiri dari 4 angka. Silakan coba lagi.\n");

6. Jika input tahun yang dimasukkan oleh pengguna tidak sesuai dengan format yang diinginkan (yaitu 4 digit), program akan menampilkan pesan kesalahan.

        } else {
            break;
        }

7. Jika input tahun sesuai dengan format yang diinginkan, program akan keluar dari loop dengan menggunakan pernyataan `break`.

    // Memeriksa apakah tahun kabisat atau bukan
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        printf("%d adalah tahun kabisat.\n", tahun);
    } else {
        printf("%d bukan tahun kabisat.\n", tahun);
    }

8. Setelah mendapatkan input tahun yang valid dari pengguna, program melakukan pengecekan apakah tahun tersebut merupakan tahun kabisat atau bukan. Pengecekan dilakukan dengan aturan-aturan yang berlaku untuk tahun kabisat. Hasil pengecekan kemudian dicetak dan ditampilkan kepada pengguna.

    return 0;
}

5. Akhirnya, fungsi `main()` mengembalikan nilai 0, menandakan bahwa program telah berakhir dengan sukses. Ini adalah standar dalam bahasa C untuk menunjukkan bahwa program telah selesai dengan baik.
   
