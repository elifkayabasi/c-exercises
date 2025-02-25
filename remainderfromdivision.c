
#include <stdio.h>

int main() {
    int a,b;
    
    printf ("Ilk sayiyi giriniz:");
    scanf ("%d", &a);
    printf ("İkinci sayiyi giriniz:");
    scanf ("%d", &b);
    
    printf ("Iki sayinin bolumunden kalan:%d\n", a%b);

    return 0;
}