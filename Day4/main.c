#include <stdio.h>

#define SEC_PER_MIN 60
#define SECS_PER_HOUR 3600

unsigned int seconds,minutes,hours,secs_left,mins_left;

int main()
{
    printf("Enter number of seconds:");
    scanf("%d",&seconds);
    hours = seconds/SECS_PER_HOUR;
    minutes = seconds/SEC_PER_MIN;
    mins_left = minutes % SEC_PER_MIN;
    secs_left = seconds % SEC_PER_MIN;

    printf("%u seconds is equal to:\n",seconds);
    printf("Hours:%u,\nMinutes:%u,\nSeconds:%u",hours,mins_left,secs_left);
    return 0;
}
