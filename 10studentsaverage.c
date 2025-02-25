#include <stdio.h>

int main() {
    int sayac, toplam, puan, ortalama;
    
    toplam=0;
    printf("Bu program 10 öğrencinin not ortalamasını hesaplar.\n");
    for(sayac=1;sayac<=10;sayac++)
    {
        printf("%d. öğrencinin notunu giriniz:\n", sayac);
        scanf("%d", &puan);
        toplam+=puan;
    }
    ortalama=toplam/10;
    printf("10 öğrencinin not ortalaması: %d", ortalama);

    return 0;
}