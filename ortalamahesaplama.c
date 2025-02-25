#include <stdio.h>

int main() {
    int sayi1, sayi2, sayi3;
    float ortalama;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    printf("Üçüncü sayiyi giriniz: ");
    scanf("%d", &sayi3);

    ortalama = (sayi1 + sayi2 + sayi3) / 3.0;
    printf("Ortalama = %f\n", ortalama);

    return 0;
}
