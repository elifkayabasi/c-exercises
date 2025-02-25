#include <stdio.h>

int main() {
    int i1, i2, i3;
    int max;

    printf("Bu program girilen 3 tam sayidan buyuk olani ekrana yazar:\n");
    printf("1. tam sayiyi giriniz:\n");
    scanf("%d", &i1);
    printf("2. tam sayiyi giriniz:\n");
    scanf("%d", &i2);
    printf("3. tam sayiyi giriniz:\n");
    scanf("%d", &i3);

    // İlk sayıyı maksimum kabul et
    max = i1;

    // 2. sayı maksimumdan büyükse güncelle
    if (max < i2) 
        max = i2;

    // 3. sayı maksimumdan büyükse güncelle
    if (max < i3) 
        max = i3;

    // En büyük sayıyı yazdır
    printf("En buyuk sayi = %d\n", max);

    return 0;
}
