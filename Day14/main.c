#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 80

int main()
{
    //int ch;

   // while((ch = getchar())!= '\n')
    //    putchar(ch);


  /*  char ch , buffer[MAX+1];
      int x = 0;

      while((ch = getchar())!= '\n' && x<MAX)
        buffer[x++] = ch;

        buffer[x] = '\0';

        printf("%s\n",buffer);
*/

    //int ch;

//    while((ch = getch())!='\r')
  //      putchar(ch);


    //while ((ch = getche())!='\r');

    char buffer[10];
    while(1)
    {
        fgets(buffer,10,stdin);

        if(buffer[0]== '\n')
            break;

        puts(buffer);
    }

    int *ptr;
    int a = 0;

    ptr = &a;

    printf("%d\n%d",ptr,&ptr);

    return 0;
}
