// Problem 7: Bir tamsayı dizisinde her bir sayıyı yerine kendisinden sonraki indekslerde bulunan en büyük sayı ile değiştirme
#include <stdio.h>

int main() {
    int dizi[] = {7, 5, 9, 8, 6, 5, 8, 7, 4, 6};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int maxSağ = -1;

    printf("Orijinal dizi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    for (int i = n - 1; i >= 0; i--) {
        int geçici = dizi[i];
        dizi[i] = maxSağ;
        if (geçici > maxSağ) {
            maxSağ = geçici;
        }
    }

    printf("Değişim sonrası dizi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}
