#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("%d\n",sizeof(int));
   int array[10];
   int array2[10];
   int array3[2][5];
   printf("%d\n",array);      //6422000 starting
   printf("%d\n",&array[9]);      //6422000 + 36 start of the end (Expands to +38) Next item will start at 6422038
   printf("%d\n",array2);      //6422000 + 38     (actually saves it in -48 position?????)  Goes in reverse
   printf("%d\n",&array2[9]);      //&array2 + 36
   printf("%d\n",&array - 1);  //array - 40
   printf("%d\n",&array[9] - 1);  //array[8] , array[9] - 4
   printf("%d\n",array3);
   printf("%d",&array3[1][4]);      //missing 7 bytes between end of array3 and start of array2???
   return 0;
}
