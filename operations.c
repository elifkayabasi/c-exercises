// Online C compiler to run C program online
#include <stdio.h>

int main(void) {
    int sayi1;
    int sayi2;
    int toplam;
    int cikarma;
    int carpma;
    int bolme;
    
    printf ("Birinci tam sayıyı giriniz:\n");
    scanf ("%d",&sayi1);
    printf ("İkinci tam sayıyı giriniz:\n");
    scanf ("%d",&sayi2);
   
    toplam = sayi1 + sayi2;
    cikarma = sayi1 - sayi2;
    carpma = sayi1 * sayi2;
    bolme = sayi1 / sayi2;
  
    printf("Toplam=%d\n", toplam);
    printf("Cikarma=%d\n", cikarma);
    printf("Carpma=%d\n", carpma);
    printf("Bolme=%d\n", bolme);

    

    return 0;
}
