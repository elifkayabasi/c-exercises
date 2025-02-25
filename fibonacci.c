#include <stdio.h>

int main() {
    
    int sayac, kactane, prev, now, next;
    
    printf("Bu program Fibonacci Serisinin ilk n değerini hesaplar.\n");
    printf("Fibonacci serisinin kaçıncı elemanına kadar hesaplanacak: ");
    scanf("%d", &kactane);
    if (kactane<=2 || kactane>=48)
    {
        printf("Bu kadar az/çok değer hesaplanamaz. En az 3 en fazla 48 girin.\n");
    }
    else
    {
        printf("0 1 ");
        
        prev=0;
        now=1;
        for (sayac=3;sayac>2 && sayac<=kactane; sayac++)
        {
            next=prev+now;
            printf("%d ", next);
            prev=now;
            now=next;
        }
    }
    
    

    return 0;
}