// Problem 6: Keith sayısı olup olmadığını bulma
#include <stdio.h>
#include <string.h>

int isKeith(int num) {
    char numStr[20];
    int terms[20], termCount = 0;

    sprintf(numStr, "%d", num); // Sayıyı stringe çevir
    termCount = strlen(numStr);

    for (int i = 0; i < termCount; i++) {
        terms[i] = numStr[i] - '0'; // İlk terimler basamaklar
    }

    int sum, index = termCount;
    while (1) {
        sum = 0;
        for (int i = index - termCount; i < index; i++) {
            sum += terms[i];
        }

        if (sum == num) {
            return 1; // Keith sayısıdır
        }
        if (sum > num) {
            return 0; // Keith sayısı değildir
        }

        terms[index++] = sum; // Yeni terimi diziye ekle
    }
}

int main() {
    int sayi;

    printf("Bir sayı girin: ");
    scanf("%d", &sayi);

    if (isKeith(sayi)) {
        printf("%d bir Keith sayısıdır.\n", sayi);
    } else {
        printf("%d bir Keith sayısı değildir.\n", sayi);
    }

    return 0;
}
