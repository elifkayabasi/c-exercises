#include <stdio.h>

int main() {
    int sayac, toplam, puan, ortalama, ogr_sayisi;

    toplam = 0;

    printf("Bu program dışarıdan girilen öğrenci sayısı kadar öğrencinin not ortalamasını hesaplar.\n");
    printf("Kaç öğrencinin not ortalaması hesaplanacak:\n");
    scanf("%d", &ogr_sayisi);

    if (ogr_sayisi <= 0) {
        printf("Geçersiz öğrenci sayısı. Lütfen pozitif bir sayı giriniz.\n");
        return 1;
    }

    for (sayac = 1; sayac <= ogr_sayisi; sayac++) {
        printf("%d. öğrencinin notunu giriniz:\n", sayac);
        scanf("%d", &puan);
        
        if (puan < 0 || puan > 100) {
            printf("Geçersiz not. Lütfen 0-100 arasında bir değer giriniz.\n");
            sayac--; // Geçersiz not için tekrar giriş alınması
            continue;
        }

        toplam += puan;
    }

    ortalama = toplam / ogr_sayisi;
    printf("%d öğrencinin not ortalaması: %d\n", ogr_sayisi, ortalama);

    return 0;
}
