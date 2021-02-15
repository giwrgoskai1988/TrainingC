#include <stdio.h>
#include <stdlib.h>

#define X_LENGTH 5
#define Y_LENGTH  12
#define LENGTH 10

char *char_ptr;
int cost,*cost_ptr;
int data[20];
int *data_ptr;
int x[X_LENGTH],y[Y_LENGTH];
int counter;
int a[LENGTH],b[LENGTH];
long *ab_ptr;
float radius,*radius_ptr;
long sumarrays(int[], int[],int , int);
long* add_symmetrical_arrays(int[],int[],int);
void fill_array_random(int[],int);

int main()
{
    //Exec 1,2,3,4
    cost_ptr = &cost;
    *cost_ptr = 100;  // or cost =100;
    printf("cost : %d\n",cost);
    printf("showing cost from pointer : %d\n",*cost_ptr);
    printf("showing memory address of cost pointer : %d\n",cost_ptr);

    puts("------------------------------------------------------------");
    //Exec 5,6
    radius_ptr = &radius;
    data_ptr = data;
    data[2] = 100;
    *(data_ptr + 2 )= 100;

    //Exec 7
    fill_array_random(x,X_LENGTH);
      puts("------------------------------------------------------------");
    fill_array_random(y,Y_LENGTH);

    printf("Sum of both arrays is : %ld\n",sumarrays(x,y,X_LENGTH,Y_LENGTH));

    puts("------------------------------------------------------------");
    //Exec 8,9

    fill_array_random(a,LENGTH);
          puts("------------------------------------------------------------");
    fill_array_random(b,LENGTH);

    ab_ptr = add_symmetrical_arrays(a,b,LENGTH);

    printf("%ld\n",ab_ptr);



    return 0;
}

void fill_array_random(int x[],int x_length)
{
    for(counter = 0 ; counter < x_length ; counter++)
    {
         x[counter] = rand();
         printf("%d\n",x[counter] );
    }
}

long sumarrays(int x[], int y[], int x_length , int y_length)
{
    long sum = 0;
     for(counter = 0 ; counter < x_length ; counter++)
    {
        sum += x[counter];
    }

    for(counter = 0 ; counter < y_length ; counter++)
    {
       sum += y[counter];
    }
    return sum;
}


long* add_symmetrical_arrays(int a[], int b[], int length)
{
    long ab[length];
    for (counter = 0 ; counter < length ; counter++)
    {
        ab[counter] = a[counter] + b[counter];
    }
    printf("%d\n",&ab);

    return ab;
}
