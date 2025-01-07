// Problem 3: Bir kelimedeki kaç farklı karakter olduğunu bulma
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char kelime[256];
    bool karakterler[256] = {false};
    int farkliKarakterSayisi = 0;

    printf("Bir kelime girin: ");
    fgets(kelime, sizeof(kelime), stdin);
    kelime[strcspn(kelime, "\n")] = 0; // Yeni satır karakterini kaldır

    for (int i = 0; i < strlen(kelime); i++) {
        if (!karakterler[(unsigned char)kelime[i]]) {
            karakterler[(unsigned char)kelime[i]] = true;
            farkliKarakterSayisi++;
        }
    }

    printf("Farklı karakter sayısı: %d\n", farkliKarakterSayisi);
    return 0;
}
