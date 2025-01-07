// Problem 4: Bir kelimedeki harflerin tüm permütasyonlarını yazdırma
#include <stdio.h>
#include <string.h>

void permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            // Harfleri yer değiştir
            char temp = str[l];
            str[l] = str[i];
            str[i] = temp;

            permute(str, l + 1, r);

            // Geri alma
            temp = str[l];
            str[l] = str[i];
            str[i] = temp;
        }
    }
}

int main() {
    char kelime[256];

    printf("Bir kelime girin: ");
    fgets(kelime, sizeof(kelime), stdin);
    kelime[strcspn(kelime, "\n")] = 0; // Yeni satır karakterini kaldır

    printf("Permütasyonlar:\n");
    permute(kelime, 0, strlen(kelime) - 1);

    return 0;
}
