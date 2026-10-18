#include <stdio.h>

int main(void)
{
    int n;
    int i = 1;
    int sign = 1;
    int s = 0;

    printf("Введите N: ");
    scanf("%d", &n);

    // += это "прибавь к тому, что уже накопилось", для суммы как раз то что надо.
    // для произведения был бы *=, там каждый раз умножаем накопленное
    while (i <= n)
    {
        s += sign * i;
        sign = -sign;
        i++;
    }

    printf("S = %d\n", s);
    return 0;
}