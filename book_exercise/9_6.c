#include <stdio.h>
#define delta 1e-6
double ya(double x);
double yb(double x);
double Integral(double (*f)(double), double a, double b);
int main()
{
    double a, b;
    printf("a=");
    scanf("%lf", &a);
    printf("b=");
    scanf("%lf", &b);
    printf("ya|a~b=%.4lf\nyb|a~b=%.4lf", Integral(ya, a, b), Integral(yb, a, b));
    return 0;
}
double Integral(double (*f)(double), double a, double b)
{
    double i,sum = 0;
    for (i = a + delta; i <= b;i += delta)
    {
        sum += f(i) * delta;
    }
    return sum;
}
double ya(double x)
{
    return (1 + x * x);
}
double yb(double x)
{
    return x / (1 + x * x);
}