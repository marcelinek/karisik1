// Problem 1: Cümledeki en uzun ve en kısa kelimeleri bulma
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char cumle[256];
    char kelime[50];
    char enUzun[50] = "", enKisa[50] = "";
    int uzunluk, minUzunluk = INT_MAX, maxUzunluk = 0;

    printf("Bir cümle girin: ");
    fgets(cumle, sizeof(cumle), stdin);
    cumle[strcspn(cumle, "\n")] = 0; // Yeni satır karakterini kaldır

    char *ptr = strtok(cumle, " "); // Kelimeleri boşluklardan ayır
    while (ptr != NULL) {
        strcpy(kelime, ptr);
        uzunluk = strlen(kelime);

        if (uzunluk > maxUzunluk) {
            maxUzunluk = uzunluk;
            strcpy(enUzun, kelime);
        }

        if (uzunluk < minUzunluk) {
            minUzunluk = uzunluk;
            strcpy(enKisa, kelime);
        }

        ptr = strtok(NULL, " ");
    }

    printf("En uzun kelime: %s\n", enUzun);
    printf("En kısa kelime: %s\n", enKisa);

    return 0;
}
