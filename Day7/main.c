#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 65,y=5;
    char f = 'A';
    //int x = 4,y=5.0;    doesnt work
    printf("%f%%",(float)x/y);
    printf("\n%c",x);   //this works fine for some reason
    printf("\n%d",f);   //this doesnt print 65 but prints 0 , it prints 65 if char is written with one 'A'  and not with two "A";
    return 0;
}
