// Problem 5: Belirtilen başlangıç indeksinden itibaren substring oluşturma fonksiyonu
#include <stdio.h>
#include <string.h>

void substring(const char *metin, int baslangic, int uzunluk, char *sonuc) {
    int metinUzunlugu = strlen(metin);
    if (baslangic >= metinUzunlugu || baslangic < 0 || uzunluk <= 0) {
        strcpy(sonuc, ""); // Geçersiz durumlarda boş sonuç döndür
        return;
    }

    int i;
    for (i = 0; i < uzunluk && (baslangic + i) < metinUzunlugu; i++) {
        sonuc[i] = metin[baslangic + i];
    }
    sonuc[i] = '\0'; // Sonlandırıcı karakter ekle
}

int main() {
    char metin[256], sonuc[256];
    int baslangic, uzunluk;

    printf("Bir metin girin: ");
    fgets(metin, sizeof(metin), stdin);
    metin[strcspn(metin, "\n")] = 0; // Yeni satır karakterini kaldır

    printf("Başlangıç indeksini girin: ");
    scanf("%d", &baslangic);

    printf("Uzunluğu girin: ");
    scanf("%d", &uzunluk);

    substring(metin, baslangic, uzunluk, sonuc);

    printf("Oluşan substring: %s\n", sonuc);
    return 0;
}
