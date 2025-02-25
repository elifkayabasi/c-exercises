#include <stdio.h>

int main() {
    int sayac, toplam, puan, ortalama, ogr_sayisi;
    
    toplam=0;
    
    printf("Bu program dışarıdan girilen öğrenci sayısı kadar öğrencinin not ortalamasını hesaplar.\n");
    printf("Kac ogrencinin not ortalaması hesaplanacak:\n");
    scanf("%d", &ogr_sayisi);
    if(ogr_sayisi > 10){
        printf("Öğrenci Sayısı 10'dan düşük olmalıdır.");
    } else {
        for(sayac=1;sayac<=ogr_sayisi;sayac++)
    {
        printf("%d. öğrencinin notunu giriniz:\n", sayac);
        scanf("%d", &puan);
        toplam+=puan;
    }
    ortalama=toplam/ogr_sayisi;
    printf("10 öğrencinin not ortalaması: %d", ortalama);
    }
    

    return 0;
}