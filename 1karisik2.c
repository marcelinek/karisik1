// Problem 2: Girilen cümlede bir kelimenin kaç defa geçtiğini bulma
#include <stdio.h>
#include <string.h>

int main() {
    char cumle[256], kelime[50];
    int sayac = 0;

    printf("Bir cümle girin: ");
    fgets(cumle, sizeof(cumle), stdin);
    cumle[strcspn(cumle, "\n")] = 0; // Yeni satır karakterini kaldır

    printf("Aranacak kelimeyi girin: ");
    fgets(kelime, sizeof(kelime), stdin);
    kelime[strcspn(kelime, "\n")] = 0; // Yeni satır karakterini kaldır

    char *ptr = cumle;
    while ((ptr = strstr(ptr, kelime)) != NULL) {
        sayac++;
        ptr += strlen(kelime); // Aynı kelimeyi tekrar saymamak için ilerle
    }

    printf("Kelime '%s' cümlede %d kez geçmektedir.\n", kelime, sayac);
    return 0;
}
