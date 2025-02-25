#include <stdio.h>
#include <time.h>

int main() {
    char ad[50], soyad[50];
    int dogumYili, yas;

    // Kullanıcıdan ad ve soyad bilgilerini alıyoruz.
    printf("Adınızı girin: ");
    scanf("%49s", ad);  // Buffer overflow önlemek için sınır ekledik.
    
    printf("Soyadınızı girin: ");
    scanf("%49s", soyad);  // Buffer overflow önlemek için sınır ekledik.
    
    printf("Doğum yılınızı girin: ");
    scanf("%d", &dogumYili);
    
    // Şu anki yılı almak için time() ve localtime() fonksiyonlarını kullanıyoruz.
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int suAnkiYil = tm.tm_year + 1900;
    
    // Yaş hesaplama
    yas = suAnkiYil - dogumYili;
    
    // Sonucu ekrana yazdırıyoruz.
    printf("Merhaba %s %s, yaşınız: %d\n", ad, soyad, yas);

    return 0;
}
