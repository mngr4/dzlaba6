#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    int a, b;
    printf("Введите два числа: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Деление на ноль невозможно.\n");
    } else {
        printf((a % b == 0) ? "Да\n" : "Нет\n");
    }

    return 0;
}
