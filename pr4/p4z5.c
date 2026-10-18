#include <stdio.h>

double l_to_gal(double l)
{
    const double L_IN_GAL = 3.785;
    return l / L_IN_GAL;
}

int main(void)
{
    double value;

    printf("Сколько литров? ");
    while (scanf("%lf", &value) == 1)
    {
        printf("%.2f л = %.2f гал\n", value, l_to_gal(value));
        printf("Сколько литров? ");
    }
    return 0;
}