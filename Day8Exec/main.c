#include <stdio.h>
#include <stdlib.h>

int x,y;


int main()
{
    //Exec 1

    int one[1000];
    char two[1000];
    double three[1000];

    //Exec 2
    int array[10] = {1,1,1,1,1,1,1,1,1,1};

    //or
    for(x = 0; x < 10 ; x++)
    {
        array[x] = 1;
    }

    //Exec 3,4

    int stuff[12][10];

    for(x = 0 ; x < 12 ; x++)
    {
        for(y = 0 ; y < 10 ; y++)
        {
            stuff[x][y] = 0 ;
        }
    }

  //Exec 7

  int matrix[5][4];

  for(x = 0 ; x < 5 ; x++)
  {
    for(y = 0 ; y < 4 ; y++)
    {
        matrix[x][y] = rand();
        printf("%d\t",matrix[x][y]);
    }
    puts("");
  }

   puts("-----------------------------------------------------------");
  //Exec 8,9
    int array_1[10],array_2[10];

    for(x = 0 ; x < 10 ; x++)
    {
        array_1[x] = x;
        array_2[x] = array_1[x] + 10 ;
        printf("%d\t%d\n",array_1[x],array_2[x]);
    }

  return 0;
}
