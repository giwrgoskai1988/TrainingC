#include <stdio.h>
#include <stdlib.h>

//Exec 5
struct friends
{
    char fname[21];
    char lname[31];
    char address[41];
    struct friend *next_friend;
};

typedef struct friends Friend;
typedef Friend *Friend_list;

void mark_X(char (*)[], int , int);

void sort(double *[], int , int);
int normal(double a, double b);
int reverse(double a, double b);


void main()
{
    //Exec 1
    //pointer to method that returns float and accepts int
    float (*delegate)(int field);

    //Exec 2
    //array of pointers to methods that return in and accept a pointer to char as param
    int (*delegate_array[5])(char *);

    //Exec 3
    //array of pointers to char
    char *ptr[10];

    //Exec 6

    char ch[12][12] = {0};
    mark_X(ch,12,12);

    //Exec 7

    double *p[10];
    int i = 0 ;
    printf("\n\nEnter 10 doubles : ");
    while(i++ < 10)
    {
        fflush(stdin);
        scanf("%lf",p+i);
    }

    puts("Enter 0 for normal sorting or 1 for reverse : ");
    fflush(stdin);
    int choice;
    scanf("%d",&choice);

    sort(p,10, choice);

    puts("Sorting Array......");
    for(i = 0 ; i < 10 ; i++)
    {
        printf("%lf\n",*(p+i));
    }





}

void mark_X(char (*a)[], int x,int y)
{
    char *p;
    p = (char *)a;
    int i;
    for(i = 0 ; i < x * y ; i++)
    {
        *(p + 2*i) = 'X';
        printf("%c",*(p+i));
    }

}


void sort(double *a[],int size,int choice)
{
    int (*compare)(double , double );

    if(choice)
     compare = reverse;
     else
        compare = normal;

    int x,y;
    double temp;
    double *p = (double *)a;

    for(x = 1 ; x < size ; x++)
    {
        for(y = 0 ; y < size -1 ; y++)
        {

            if(compare(*(p + y), *(p+y+1)))
            {
                temp = *(p + y);
                *(p + y ) = *(p + y + 1);
                *(p + y + 1 ) = temp;
            }
        }
    }
}


int normal(double a, double b)
{
    return a > b;
}

int reverse(double a , double b)
{
    return a < b;
}

