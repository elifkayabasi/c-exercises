#include <stdio.h>

int main() {
    int puan;

    // Kullanıcıdan puanı al
    printf("Ogrencinin notunu giriniz (0-100 arasi):\n");
    scanf("%d", &puan);

    // Geçersiz puan kontrolü
    if (puan < 0 || puan > 100) {
        printf("Gecersiz not girdiniz. Not 0 ile 100 arasinda olmalidir.\n");
    } else if (puan >= 90) {
        printf("Ogrenci A almistir.\n");
    } else if (puan >= 80) {
        printf("Ogrenci B almistir.\n");
    } else if (puan >= 70) {
        printf("Ogrenci C almistir.\n");
    } else if (puan >= 60) {
        printf("Ogrenci D almistir.\n");
    } else {
        printf("Ogrenci F almistir.\n");
    }

    return 0;
}
