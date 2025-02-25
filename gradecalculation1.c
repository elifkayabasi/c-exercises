#include <stdio.h>

int main() {
    int puan;
    char harf;

    // Kullanıcıdan puan girişi
    printf("Ogrencinin notunu giriniz (0-100 arasi):\n");
    scanf("%d", &puan);

    // Geçersiz puan kontrolü
    if (puan < 0 || puan > 100) {
        printf("Gecersiz not girdiniz. Not 0 ile 100 arasinda olmalidir.\n");
    } else {
        // Harf notunu belirleme
        if (puan >= 90)
            harf = 'A';
        else if (puan >= 80)
            harf = 'B';
        else if (puan >= 70)
            harf = 'C';
        else if (puan >= 60)
            harf = 'D';
        else
            harf = 'F';

        // Sonucu yazdır
        printf("Ogrenci %c almistir.\n", harf);
    }

    return 0;
}
