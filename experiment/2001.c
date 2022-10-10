#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define EPS 1e-2

float square(float a, float b, float c)
{
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
};

int main()
{
    float a,b,c;
    int flag = 0;
    scanf("%f%f%f",&a,&b,&c);
    if (fabs(a - b) <= EPS && fabs(b - c) <= EPS)
    {
        printf("等边三角形\nS=%.2f\n",square(a,b,c));
        exit (0);
    }
    else if ((a + b) <= c || (a + c) <= b || (b + c) <= a)
    {
        printf("不是三角形\n");
        exit (0);
    }
    if (fabs(a - b) <= EPS || fabs(a - c) <= EPS || fabs(b - c) <= EPS)
    {
        printf("等腰");
        flag = 1;
    }
    if (fabs(a * a + b * b - c * c) <= EPS || fabs(a * a + c * c - b * b) <= EPS || fabs(c * c + b * b - a * a) <= EPS)
    {
        printf("直角");
        flag = 1;
    }
    if (flag)
        printf("三角形\nS=%.2f\n",square(a,b,c));
    else
        printf("一般三角形\nS=%.2f\n",square(a,b,c));
    return 0;
}
