#include <stdio.h>

int main() {
    double num1, num2;
    char op;
    double result;

    printf("Tatlı Hesap Makinesi\n");
    printf("Bir işlem seçiniz: +, -, *, /\n");
    printf("İşlem: ");
    scanf(" %c", &op);

    printf("Birinci sayıyı giriniz: ");
    scanf("%lf", &num1);

    printf("İkinci sayıyı giriniz: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Sonuç: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Sonuç: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Sonuç: %.2lf\n", result);
            break;
        case '/':
            result = num1 / num2;
            printf("Sonuç: %.2lf\n", result);
            break;
    }

    return 0;
}
