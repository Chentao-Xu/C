#include <stdio.h>
#include <math.h>
int main()
{
    int hour,minute;
    char h,m;
    double angle_hour = 0,angle_minute = 0,delte_angle = 0;
    do
    {
        printf("Please input time\n");
        scanf("%d%c%d%c",&hour,&h,&minute,&m);
        angle_hour = hour * 30 + 0.5 * minute;
        angle_minute = 6 * minute;
        delte_angle = fabs(angle_minute - angle_hour);
        if (delte_angle > 180)
        {
            delte_angle = 360 - delte_angle;
        }
    }while(h != 'h' || m != 'm' || hour > 12 || hour < 0 || minute > 60 || minute < 0);
    printf("At %d:%02d the angle is %.1lf degrees.\n",hour,minute,delte_angle);
    return 0;
}