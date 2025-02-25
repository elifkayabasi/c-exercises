#include <stdio.h>

int main() {
    int not1, not2;

    printf("Bu program bir dersin yazili ve sozlu notlarini alir ve sonuca gore \"Gecti\" ya da \"Kaldi\" yazar.\n");

    // Yazılı notunu al
    printf("Yazili notunu giriniz (0-100 arasi):\n");
    scanf("%d", &not1);

    // Sözlü notunu al
    printf("Sozlu notunu giriniz (0-100 arasi):\n");
    scanf("%d", &not2);

    // Geçerli not aralığı kontrolü
    if ((not1 < 0 || not1 > 100) || (not2 < 0 || not2 > 100)) {
        printf("Girdiginiz notlar 0-100 arasinda olmalidir.\n");
    } else {
        // Koşula göre sonucu yazdır
        (not1 >= 50 && not2 >= 50) ? printf("Gecti\n") : printf("Kaldi\n");
    }

    return 0;
}
