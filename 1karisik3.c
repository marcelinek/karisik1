// Problem 3: Girilen bir cümlede istenen bir karakterden sonra kelime ekleme
#include <stdio.h>
#include <string.h>

int main() {
    char cumle[256], eklenecek[50], karakter;

    printf("Bir cümle girin: ");
    fgets(cumle, sizeof(cumle), stdin);
    cumle[strcspn(cumle, "\n")] = 0; // Yeni satır karakterini kaldır

    printf("Hangi karakterden sonra eklensin: ");
    scanf("%c", &karakter);
    getchar(); // Tampon temizleme

    printf("Eklenecek kelimeyi girin: ");
    fgets(eklenecek, sizeof(eklenecek), stdin);
    eklenecek[strcspn(eklenecek, "\n")] = 0; // Yeni satır karakterini kaldır

    char sonuc[512] = "";
    for (int i = 0; i < strlen(cumle); i++) {
        strncat(sonuc, &cumle[i], 1); // Mevcut karakteri ekle
        if (cumle[i] == karakter) {
            strcat(sonuc, eklenecek); // Karakterden sonra kelimeyi ekle
        }
    }

    printf("Sonuç: %s\n", sonuc);
    return 0;
}
