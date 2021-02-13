#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exec 1 ,2
    long my_array[50];

    my_array[49] = 123456;
    int counter;
    for(counter = 0 ; counter < 50 ; counter++)
    {
        printf("\n%ld",my_array[counter]);
    }

    printf("\n-------------------------------------------------------------------------");

    //Exec 6

    for(int x = 1 ; x <= 100 ; x += 3)
    {
        printf("\n%d",x);
    }

    printf("\n-------------------------------------------------------------------------");

    //Exec7
    int x=1;
    while(x<=100)
    {
        printf("\n%d",x);
        x+=3;
    }

    printf("\n-------------------------------------------------------------------------");

    //EXEC 8

    x = 1;

    do
    {
        printf("\n%d",x);
        x+=3;
    }while(x<=100);

    return 0;
}
