#include <stdio.h>

int main() {
    int puan;
    
    printf ("Ogrencinin notunu giriniz:\n");
    scanf ("%d", &puan);
    if (puan>=90)
        printf ("Ogrenci A almistir.");
    if (puan>=80&& puan <90)
        printf ("Ogrenci B almistir.");
    if (puan>=70&& puan <80)
        printf ("Ogrenci C almistir.");
    if (puan>=60&& puan <70)
        printf ("Ogrenci D almistir.");
    if (puan<60)
        printf ("Ogrenci F almistir.");
        

    return 0;
}
