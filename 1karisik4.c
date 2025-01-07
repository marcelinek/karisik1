// Problem 4: Kelimedeki rakamları ayırıp yazıyla ve sayı olarak gösterme
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kelime[256];
    char rakamlar[256] = "";

    printf("Bir kelime girin: ");
    fgets(kelime, sizeof(kelime), stdin);
    kelime[strcspn(kelime, "\n")] = 0; // Yeni satır karakterini kaldır

    for (int i = 0; i < strlen(kelime); i++) {
        if (isdigit(kelime[i])) {
            strncat(rakamlar, &kelime[i], 1); // Rakamları ayır
        }
    }

    if (strlen(rakamlar) > 0) {
        int sayi = atoi(rakamlar); // Rakamları tam sayıya dönüştür
        printf("Rakamlar: %s\n", rakamlar);
        printf("Sayı: %d\n", sayi);
    } else {
        printf("Kelimenin içinde rakam bulunamadı.\n");
    }

    return 0;
}
