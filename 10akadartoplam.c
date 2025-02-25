#include <stdio.h>

int main() {
    int sayac, toplam;
    toplam=0;
    for(sayac=1;sayac<=10;sayac++)
    {
        toplam=toplam+sayac;
        //printf("sayac: %d\n", sayac);
        //printf("toplam: %d\n", toplam);
    }
    printf("1\'den 10\'a kadar sayilarin toplami: %d", toplam);
    return 0;
}