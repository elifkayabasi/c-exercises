#include <stdio.h>

int main() {
    int sayi;

    printf("Bu program 1-5 arasindaki sayilarin okunuslarini ekrana yazar:\n");
    printf("1-5 arasinda bir sayi giriniz:\n");
    scanf("%d", &sayi);

    // Switch-case ile sayının okunuşunu yazdır
    switch (sayi) {
        case 1:
            printf("Bir\n");
            break; // Sonrasında diğer case'lerin çalışmasını engeller
        case 2:
            printf("Iki\n");
            break;
        case 3:
            printf("Uc\n");
            break;
        case 4:
            printf("Dort\n");
            break;
        case 5:
            printf("Bes\n");
            break;
        default: // 1-5 arasında olmayan bir değer için
            printf("1-5 arasinda bir sayi girmediniz.\n");
    }

    return 0;
}
