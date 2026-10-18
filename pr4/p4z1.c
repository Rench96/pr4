#include <stdio.h>
#define MG_IN_G 1000

int main(void)
{
    int mg;
    printf("Сколько миллиграммов? ");
    while (scanf("%d", &mg) == 1 && mg > 0)
    {
        // mg и MG_IN_G - целые числа (int), поэтому деление целочисленное:
        // результат тоже int, дробную часть хранить негде, и она отбрасывается
        int g = mg / MG_IN_G;
        int rest = mg % MG_IN_G;
        printf("%d мг = %d г %d мг\n", mg, g, rest);
        printf("Сколько миллиграммов? ");
    }
    return 0;
}