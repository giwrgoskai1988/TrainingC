#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>


#define INTEGER 1
#define LONG 2
#define FLOAT 3
#define DOUBLE 4
#define CHAR 5


int my_func(char array[]);
void function(int *, int *,int *);
void *function3(void *minx_max[2],int count,int type , ...);

char *function2(int count,...);

int main()
{
    int int1,int2,int3;
    int1 = int2 = int3 = 1;

    function(&int1,&int2,&int3);
    printf("\n%d",int1);


    //Exec 6

   // char *str = function2(4,'a','b','c','d');
   // printf("\n%s",str);

    //Exec 7

    int type;

    puts("Choose type of variables:\n[1]-Integer\n[2]-Long\n[3]-Float\n[4]-Double\n[5]-Char");
    fflush(stdin);
    scanf("%d",&type);
    void *min_max[2];
    function3(min_max,6,type,5.9,-15.7,2.2,-15.1,44.4,78.5);

    printf("\nMin: %f",*(float*)min_max[0]);
    printf("\nMax: %f",*(float*)min_max[1]);

    // etc.......

    return 0;
}


void function(int *a, int *b,int *c)
{
    *a = *b+*c;

}

char *function2(int count,...)
{
    char *string = malloc(sizeof(char)* count + 1);
    int i;
    va_list arg_ptr;
    va_start(arg_ptr,count);

    if(string == NULL)
    {
        puts("Error in allocation!");
        exit(1);
    }

    for (i = 0 ; i < count ; i++)
    {
        *(string + i) = (char)(va_arg(arg_ptr,int));
    }

    va_end(arg_ptr);

    return string;

}



void *function3(void *min_max[2],int count,int type, ...)
{
    va_list args_ptr;
    va_start(args_ptr,count);
    int i;

    switch  (type)
    {
        case CHAR:
        case INTEGER:
            {
                int *min = (int*)malloc(sizeof(int));
                int *max = (int*)malloc(sizeof(int));
                *min = va_arg(args_ptr,int);
                *max = *min;
                int temp = 0;
                for (i = 0 ; i < count - 1 ; i++)
                {
                    temp = va_arg(args_ptr,int);
                    if( *min > temp)
                        *min= temp;
                    if(*max < temp)
                        *max = temp;
                }

                    min_max[0] = min;
                    min_max[1] = max;
                break;
            }
            case LONG:
            {
                long *min = (long*)malloc(sizeof(long));
                long *max = (long*)malloc(sizeof(long));
                *min = va_arg(args_ptr,long);
                *max = *min;
                long temp = 0;
                for (i = 0 ; i < count - 1 ; i++)
                {
                    temp = va_arg(args_ptr,long);
                    if( *min > temp)
                        *min = temp;
                    if(*max < temp)
                        *max = temp;
                }
                    min_max[0] = min;
                    min_max[1] = max;
                break;
            }
            case FLOAT:
            {
                float *min = (float*)malloc(sizeof(float));
                float *max = (float*)malloc(sizeof(float));
                *min = (float)va_arg(args_ptr,double);
                *max = *min;
                float temp = 0.0;
                for (i = 0 ; i < count - 1 ; i++)
                {
                    temp = (float)va_arg(args_ptr,double);
                    if( *min > temp)
                        *min = temp;
                    if(*max < temp)
                        *max = temp;
                }
                    min_max[0] = min;
                    min_max[1] = max;
                break;
            }
              case DOUBLE:
            {
                double *min = (double*)malloc(sizeof(double));
                double *max = (double*)malloc(sizeof(double));
                *min = va_arg(args_ptr,double);
                *max = *min;
                double temp = 0.0;
                for (i = 0 ; i < count - 1 ; i++)
                {
                    temp = va_arg(args_ptr,double);
                    if( *min > temp)
                        *min = temp;
                    if(*max < temp)
                        *max = temp;
                }
                    min_max[0] = min;
                    min_max[1] = max;
                break;
            }
    }

    return min_max;


}


