#include <stdio.h>

int main() {
    int sayac, toplam, puan, ortalama, ogr_sayisi;
    
    toplam=0;
    
    printf("Bu program dışarıdan girilen öğrenci sayısı kadar öğrencinin not ortalamasını hesaplar.\n");
    printf("Kac ogrencinin not ortalaması hesaplanacak: ");
    scanf("%d", &ogr_sayisi);
    if(ogr_sayisi > 10 || ogr_sayisi < 1){
        printf("\nÖğrenci Sayısı 10 ile 1 arasında olmalı.");
    }
    else {
        sayac = 1;
        do {
            printf("\n%d. öğrencinin notunu giriniz: ", sayac);
            scanf("%d", &puan);
            if (puan >= 0 && puan <= 100) {
                toplam+=puan;
                sayac += 1;
            }
            else {
                printf("\nNot değeri 1 ile 100 arasında olmalı.");
            }
        } while (sayac<=ogr_sayisi);
        ortalama=toplam/ogr_sayisi;
        printf("\n%d öğrencinin not ortalaması: %d", ogr_sayisi, ortalama);
    }
    
    return 0;
}