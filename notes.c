#include <stdio.h>

int main(void) {
    int ogrenciNot;

    printf("Ogrencinin notunu giriniz:\n");
    scanf("%d", &ogrenciNot);

    if (ogrenciNot >= 60) {
        printf("Gecti\n");
    } else {
        printf("Kaldi\n");
    }

    return 0;
}
