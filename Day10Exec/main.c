#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

char letter;
void copyString(char[],char[]);
char * compareStrings(char *,char *);
char * addStrings(char * , char *);

void main()
{
    //EXEC 1
    printf("%d\n",sizeof(letter));
    letter = '$';
    puts("-------------------------------------");

    //EXEC 2,3
    char line[19]= "Pointers are fun!?";
    printf("%d\n",sizeof(line));



    char *line2 = "Pointers are Fun!";

    printf("%s\n",line);
    printf("%s\n",line2);

    //EXEC 4

    char *input;
    *input = malloc(81 * sizeof(char));
    gets(input);
    printf("%s\n",input);

    //Exec 5
    char str1[SIZE] = "Hello";
    char str2[SIZE];

    copyString(str1,str2);

    printf("%s\n",str2);

    char *str3  = "Heellooo";
    char *str4 = "Hello555555";

    char *str5 = compareStrings(str3,str4);
    printf("%s\n",str5);


    char *str6 = "Kalhspera";
    char *str7 = "World!";
    addStrings(str6,str7);


}




void copyString(char x[],char y[])
{
  for(int i = 0 ; i < SIZE ; i++)
  {
      y[i] = x[i];
  }

}


char * compareStrings(char *a , char *b)
{
    int a_size,b_size,x;
    a_size = strlen(a);
    b_size = strlen(b);

    return a_size > b_size ? a :b;
}

char * addStrings(char *a , char *b)
{
    char *new_string ;
    new_string = malloc(strlen(a) + strlen(b) + 2);

    for(int i = 0 ; i < strlen(a) ; i++)
    {
        *(new_string + i) = *(a + i);

    }


    for(int z = 0; z < strlen(b); z++)
    {
        *(new_string + strlen(a)+z) = *(b + z);
        printf("%s\n",new_string);
    }

    printf("%s",new_string);

    return new_string;
}
