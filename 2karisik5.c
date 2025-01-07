// Problem 5: Kaprekar sayısı olup olmadığını bulma
#include <stdio.h>
#include <math.h>

int isKaprekar(int sayi) {
    if (sayi == 1) {
        return 1;
    }

    int kare = sayi * sayi;
    int basamak = 0;
    int temp = kare;

    while (temp > 0) {
        basamak++;
        temp /= 10;
    }

    for (int i = 1; i < basamak; i++) {
        int bolen = pow(10, i);
        int sol = kare / bolen;
        int sag = kare % bolen;

        if (sag > 0 && sol + sag == sayi) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int sayi;

    printf("Bir sayı girin: ");
    scanf("%d", &sayi);

    if (isKaprekar(sayi)) {
        printf("%d bir Kaprekar sayısıdır.\n", sayi);
    } else {
        printf("%d bir Kaprekar sayısı değildir.\n", sayi);
    }

    return 0;
}
