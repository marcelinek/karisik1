// 1-100 arası 10 adet birbirinden farklı rastgele sayı oluşturma ve sıralı yazdırma
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 10

// Rastgele sayının dizide olup olmadığını kontrol eden fonksiyon
bool isUnique(int array[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (array[i] == num) {
            return false;
        }
    }
    return true;
}

// Diziyi büyükten küçüğe sıralı yazdırma
void printDescending(int array[], int size) {
    int tempArray[SIZE];
    for (int i = 0; i < size; i++) {
        tempArray[i] = array[i]; // Orijinal diziyi korumak için geçici bir diziye kopyala
    }
    for (int i = 0; i < size; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (tempArray[j] > tempArray[maxIndex]) {
                maxIndex = j;
            }
        }
        printf("%d ", tempArray[maxIndex]);
        int temp = tempArray[i];
        tempArray[i] = tempArray[maxIndex];
        tempArray[maxIndex] = temp;
    }
    printf("\n");
}

// Diziyi küçükten büyüğe sıralı yazdırma
void printAscending(int array[], int size) {
    int tempArray[SIZE];
    for (int i = 0; i < size; i++) {
        tempArray[i] = array[i]; // Orijinal diziyi korumak için geçici bir diziye kopyala
    }
    for (int i = 0; i < size; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (tempArray[j] < tempArray[minIndex]) {
                minIndex = j;
            }
        }
        printf("%d ", tempArray[minIndex]);
        int temp = tempArray[i];
        tempArray[i] = tempArray[minIndex];
        tempArray[minIndex] = temp;
    }
    printf("\n");
}

int main() {
    int dizi[SIZE];
    int count = 0;
    srand(time(NULL));

    // Rastgele sayılar üret ve diziye aktar
    while (count < SIZE) {
        int num = rand() % 100 + 1; // 1-100 arasında rastgele sayı
        if (isUnique(dizi, count, num)) {
            dizi[count++] = num;
        }
    }

    // Orijinal diziyi yazdır
    printf("Orijinal dizi: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    // Büyükten küçüğe sıralı yazdır
    printf("Büyükten küçüğe sıralı: ");
    printDescending(dizi, SIZE);

    // Küçükten büyüğe sıralı yazdır
    printf("Küçükten büyüğe sıralı: ");
    printAscending(dizi, SIZE);

    return 0;
}
