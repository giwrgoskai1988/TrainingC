#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=2;
    printf("%d",x++*4+2); /*here  unary isnt executed*/
    printf("\n%d",x++*x+2); /*here  unary isnt executed*/
    return 0;
}
