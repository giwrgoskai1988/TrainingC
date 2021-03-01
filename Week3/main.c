#include <stdio.h>
#include <stdlib.h>

#define SPACE 32
#define EAR 126

int file_exists(char *filename);


void main()
{
    char ch, source[80];
    int index;
    long count[127] = {0};     //saving chars starting from space up to ~
    FILE *fp;


    fprintf(stderr,"\nEnter file name (Enter 44.txt):");
    gets(source);

    if(!file_exists(source))
    {
        fprintf(stderr,"File doesnt exist!!");
        exit(1);
    }

    if((fp = fopen(source,"rb"))== NULL)
    {
        fprintf(stderr,"\nError opening the file!");
        exit(1);
    }

    while(1)
    {
        ch = fgetc(fp);

        if(feof(fp))
            break;

        if(ch >= SPACE && ch <= EAR)
            count[ch]++;

    }

    printf("\nChar\t\tCount\n");

    for(index = SPACE ; index <= EAR ; index++)
    {
        printf("[%c]\t%d\n",index,count[index]);
    }

    fclose(fp);
    exit(0);


}

int file_exists(char *filename)
{
    FILE *fp;
    if((fp = fopen(filename,"r")== NULL))
        return 0;
    else
    {
        fclose(fp);
        return 1;
    }
}
