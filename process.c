#include <stdio.h>

int main() {
    float x, y;
    
    printf("Ilk sayiyi girin: ");
    scanf("%f", &x);
    
    printf("Ikinci sayiyi girin: ");
    scanf("%f", &y);
    
    printf("Iki sayinin toplami: %f\n", x + y);
    printf("Iki sayinin farki: %f\n", x - y);
    printf("Iki sayinin carpimi: %f\n", x * y);
    printf("Iki sayinin bolumu: %f\n", x / y);
    
    
    return 0;
}
