// Problem 2a: 1-10 arası rastgele sayılarla oluşturulan dizide her elemanın tekrar sayısını bulma
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dizi[10], tekrarSayilari[11] = {0};

    srand(time(NULL)); // Rastgele sayı üretimi için başlangıç

    // Diziyi doldur ve ekrana yazdır
    printf("Dizi: ");
    for (int i = 0; i < 10; i++) {
        dizi[i] = rand() % 10 + 1; // 1-10 arasında rastgele sayı
        printf("%d ", dizi[i]);
        tekrarSayilari[dizi[i]]++;
    }
    printf("\n");

    // Her sayının tekrar sayısını yazdır
    for (int i = 1; i <= 10; i++) {
        if (tekrarSayilari[i] > 0) {
            printf("%d sayısı %d defa\n", i, tekrarSayilari[i]);
        }
    }

    return 0;
}


/*

// Problem 2b: 1-10 arası rastgele sayılarla oluşturulan dizide sadece 1 defa tekrar eden elemanları bulma
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dizi[10], tekrarSayilari[11] = {0};

    srand(time(NULL)); // Rastgele sayı üretimi için başlangıç

    // Diziyi doldur ve ekrana yazdır
    printf("Dizi: ");
    for (int i = 0; i < 10; i++) {
        dizi[i] = rand() % 10 + 1; // 1-10 arasında rastgele sayı
        printf("%d ", dizi[i]);
        tekrarSayilari[dizi[i]]++;
    }
    printf("\n");

    // Sadece 1 defa tekrar eden elemanları yazdır
    printf("1 defa tekrar eden elemanlar: ");
    for (int i = 1; i <= 10; i++) {
        if (tekrarSayilari[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

*/