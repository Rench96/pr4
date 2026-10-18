#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t r, g, b;
    float avg;

    printf("Введите r g b (числа от 0 до 255) через пробел: ");
    scanf("%hhu %hhu %hhu", &r, &g, &b);

    avg = (float)(r + g + b) / 3;

    printf("Среднее с приведением: %f\n", avg);
    printf("Без приведения было бы: %d\n", (r + g + b) / 3);

    printf("sizeof(uint8_t) = %llu байт\n", (unsigned long long)sizeof(uint8_t));
    printf("sizeof(float) = %llu байт\n", (unsigned long long)sizeof(float));
    return 0;
}