#include <stdio.h>

int main(void) {
    int num1; // kullanıcının gireceği ilk sayı
    int num2; // kullanıcının gireceği ikinci sayı

    printf("Iki tam sayi girin ve ");
    printf("aralarindaki iliskiyi bulalim\n");

    scanf("%d %d", &num1, &num2); // iki tam sayı gir

    if (num1 == num2) {
        printf("%d ile %d birbirlerine esittir\n", num1, num2);
    }

    if (num1 != num2) {
        printf("%d ile %d birbirlerine esit degildir\n", num1, num2);
    }

    if (num1 < num2) {
        printf("%d %d'den kucuktur\n", num1, num2);
    }

    if (num1 > num2) {
        printf("%d %d'den buyuktur\n", num1, num2);
    }

    if (num1 <= num2) {
        printf("%d %d'den kucuk ya da esittir\n", num1, num2);
    }

    if (num1 >= num2) {
        printf("%d %d'den buyuk ya da esittir\n", num1, num2);
    }

    return 0; // main fonksiyonu bitti
}
