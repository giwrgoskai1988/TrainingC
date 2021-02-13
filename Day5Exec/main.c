#include <stdio.h>
#include <stdlib.h>


float do_it(char,char,char);
void print_a_number(int);
long multiply(int,int);
float division(int,int);
void maths();
void average();
unsigned  long power_of_three(int);

int main()
{
    printf("%f",do_it('A','B','C'));
    print_a_number(55);
    printf("\n%ld",multiply(550,660));
    printf("\n%f",division(550,660));
    printf("\n%f",division(550,0));
    maths();
    //average();
    printf("\n%ld",power_of_three(4));
    return 0;
}

float do_it(char a,char b,char c)
{
    return (a+b+c);
}

void print_a_number(int a)
{
    printf("\n%d",a);
}

long multiply(int a, int b)
{
    return a*b;
}

float division(int a, int b)
{
    float answer=0.0;
    if(b==0)
        printf("\nCannot divide with 0!!");
    else
        answer = (float)a/b;
    return answer;
}

void maths()
{
    long a = multiply(30,1000);
    float b = division(a,10);     //here i  can pass a long inside division that accepts an int
    printf("\n%f",b);
}


void average()
{
    float a,b,c,d,e;
    printf("\nPlease enter 5 float numbers :");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    printf("\n%f",(a+b+c+d+e)/5);
}

 unsigned long power_of_three(int power)
{
    if(power<1)
        return 1;
    else
        return (3*(power_of_three(power-1)));
}
