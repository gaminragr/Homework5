#include <stdio.h>
#include <locale.h>
#include <math.h>

int task(void)
{
    double x, y, z, w;

    printf("Введите x: ");
    scanf("%lf", &x);

    printf("Введите y: ");
    scanf("%lf", &y);

    printf("Введите z: ");
    scanf("%lf", &z);

    w = pow(fabs(cos(x) - cos(y)), 1.0 + 2.0 * pow(sin(y), 2.0)) * (1.0 + z + pow(z, 2.0) / 2.0 + pow(z, 3.0) / 3.0 + pow(z, 4.0) / 4.0);

    printf("\nРезультат:\n");
    printf("x = %.6f\n", x);
    printf("y = %.6f\n", y);
    printf("z = %.6f\n", z);
    printf("w = %.6f\n", w);

    return 0;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    task();
} 