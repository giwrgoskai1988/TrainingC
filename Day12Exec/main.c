#include <stdio.h>


void print_value(int);
void print_value_1(void);
int var;

int main()
{
    //Exec 1
    register int x;
    register int y;
    printf("x = %d \t y = %d\n",x,y);

    puts("----------------------------------------------------");

    //Exec 2

    int a = 999;
    printf("a in main = %d\n",a);
    print_value(a);

    puts("----------------------------------------------------");

    //Exec 3,4

    print_value_1();

    puts("----------------------------------------------------");

    //Exec 5

    {
        int var =500;
        printf("Var inside a block = %d\n",var);
    }

    printf("Var after block = %d\n",var);

    puts("----------------------------------------------------");





    return 0;
}


void print_value(int a)
{
    printf("a from function = %d\n",a);
}

void print_value_1(void)
{
    printf("Global variable var = %d\t Auto value\n",var);
}


