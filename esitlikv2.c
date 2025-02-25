
#include <stdio.h>

int main() {
    int s1, s2;
    
    printf ("Ilk sayiyi giriniz:");
    scanf ("%d", &s1);
    printf ("İkinci sayiyi giriniz:");
    scanf ("%d", &s2);
    
    if (s1==s2)
    printf ("%d = %d\n", s1,s2);
    if (s1!=s2) 
    printf ("%d, %d'ye eşit değildir\n", s1,s2);
    if (s1>s2)
    printf ("%d > %d\n", s1,s2);
    if (s1>=s2)
    printf ("%d >= %d\n", s1,s2);
    if (s1<s2)
    printf ("%d < %d\n", s1,s2);
    if (s1<=s2)
    printf ("%d <= %d\n", s1,s2);
    

    return 0;
}