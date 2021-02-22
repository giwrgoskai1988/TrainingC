#include <stdio.h>
#include <stdlib.h>

void read_from_file(char *file_path);
int * count_letters(char *file_path,int array[]);
void read_from_code_file(char *file_path);

int main()
{
    //Exec 1,2,3

    puts("Hello world");
    printf("Hello world\n");
    fprintf(stdout,"Hello world\n");
    fprintf(stdout,"Hello world\n");
    //fprintf(stdaux,"Hello Auxiliary Port"); Not supported

    //Exec 4

    char buffer[31];

    puts("Enter a 30 letter sentence or enter * to trim : ");
    fflush(stdin);
    scanf("%30[^*,\n]", buffer);
    puts(buffer);

    //Exec 5
    puts("-----------------------------------------------");
    printf("Jack asked, \"What is a backslash?\"\nJill said, \"It is \'\\\'\n");

    puts("-----------------------------------------------");


    //Exec 6

    print_file("C:\\fff\\opeddnMe.txt");

    puts("-----------------------------------------------");

    //Exec 7
    int letters[95] = {0};
    int *ptr;
    ptr =  count_letters("C:\\fff\\openMe.txt",letters);
    int i;
    for (i = 0 ; i < 95 ; i++)
        printf("%c found %d times!\n",i+32,*(ptr + i));


    puts("-----------------------------------------------");

    //Exec 8,9
    read_from_code_file("C:\\Users\\Á\\source\\repos\\MyGit\\TrainingC\\Day14Exec\\main.c");

    return 0;
}


void print_file(char *file_path)
{
    FILE *fh = fopen(file_path,"r");

    char ch;
    if(fh <= 0 )
    {
        puts("File not found!");
    }
    else
    {
        puts("Opening file and sending it to printer...PLease wait!");
        ch = getc(fh);
        while(!feof(fh))
        {
           // fprintf(stdprn,"%c",ch);  not supported
            ch = getc(fh);
        }
        puts("Done!!");

    }
    fclose(fh);
}

int * count_letters(char *file_path,int letters[])
{
    int *ptr;
    ptr = letters;
    FILE *fh = fopen(file_path,"r");

    char ch;
    if(fh <= 0 )
    {
        puts("File not found!!");
    }
    else
    {
        int a ;
        ch = getc(fh);
        while(!feof(fh))
        {
            a = (int)ch - 32;
            *(ptr + a) += 1;
            ch = getc(fh);
        }

    }
    fclose(fh);
    return ptr;

}

void read_from_code_file(char *file_path)
{
    FILE *fh = fopen(file_path,"r");

    char line[1024];
    int line_number = 1 ;

    if(fh <= 0)
    {
        puts("File not found!");
    }

    else
    {
        while(fgets(line,1024,fh) != NULL )
        {
           printf("%d : %s",line_number++,line);
        }
    }
     fclose(fh);

}

