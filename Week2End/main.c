#include <stdio.h>
#include <stdlib.h>
#include<time.h>


void sleep(int nbr_seconds);

void main()
{
    int x , wait = 3;

    printf("Delay for %d seconds \n",wait);
    printf(">");

    for(x = 1 ; x <= wait; x++)
    {
        printf(".");
        fflush(stdout);
        sleep((int)1);
    }

    printf("Done!\n");
}


void sleep(int nbr_seconds)
{
    clock_t goal;

    goal = (nbr_seconds * CLOCKS_PER_SEC) + clock();

    while(goal > clock())
    {
        ;
    }
}
