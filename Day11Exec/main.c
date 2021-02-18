#include <stdio.h>

struct time
    {
        int a ,b ,c;
    };

struct data
{
    int a;
    float b;
    float c;
}info;


struct data2
{
    char string[21];
};

typedef struct
{
    char address1[31];
    char address2[31];
    char city[21];
    char state[3];
    char zip[11];
}RECORD;

main()
{
    //Exec 2,3
    info.a = 100;

    //Exec 4 , 5

    struct data *data_ptr;

    data_ptr = &info;

    (*data_ptr).b = 5.5;
     data_ptr -> c = 5.5;

     printf("%f\n%f\n",info.b,info.c);

     //Exec 8

     RECORD myaddress = {"Panionioy","Kaisarianh","Athens","ATK","16121"};




}
