#include <stdio.h>

int a,b,c;

int product(int x , int y);

int main()
{
    printf("Enter a number between 1 and 100:");
    scanf("%d",&a);

    printf("Enter another number between 1 and 100:");

    scanf("%d",&b);

    c = product(a,b);

    printf("%d times %d is : %d", a ,b ,product(a,b));  //this is acceptable as well
}


int product(int a , int b)
{
    return a * b;
}
