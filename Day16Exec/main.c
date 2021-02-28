#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Exec 1
    FILE *fh = fopen("44.txt","r");
    //_fcloseall();

    //Exec 2

    rewind(fh);
    fseek(fh,0,SEEK_SET);
    char *ch = malloc(101);

  //  while((fgets(ch,1256,fh))!= NULL)
    //    printf("%s",ch);



    //Exec 3,4
    rewind(fh);
    int line = 0;
    int page = 1;
    char a ;
    while((fgets(ch,100,fh))!= NULL )   //setting each line to be 100 characters because txt is missing \r\n
    {
        if(++line % 55 != 0)
        {
            printf("%d\t\t%s",line,ch);
        }
        else
        {
            printf("\n\n");
            printf("Page : %d\n",page++);
            puts("Press any key to go to next page!");
            fflush(stdin);
            scanf("%c",&a);
        }


    }

    //Exec 7
    rewind(fh);
    char c;
    long count;

    while((c = getc(fh))!= EOF)
        count++;


    printf("\n\nFile has %ld characters",count);

    fclose(fh);

    //Exec 8
    FILE *fh2 = fopen("44.txt","rb");

    char *new_file_name = "44copy.txt";

    FILE *fh3 = fopen(new_file_name, "wb");

    int char_1;
    while(1)
    {
        char_1 = fgetc(fh2);
        if(!feof(fh2))
            fputc(char_1,fh3);
        else
            break;
    }

    fclose(fh2);
    fclose(fh3);




    //Exec 9
    FILE *fh4 = fopen("55.txt","rb");
    int i ;
    char array[128];
    printf("\n\nHEX\t\t\tASCII\n");
    printf("===\t\t\t=====\n");

    while(!feof(fh4))
    {
        int bytes = fread(array,sizeof(char),128,fh4);

            for(i = 0 ; i <bytes; i++)
            {
                printf("%X\t\t\t%c\n",array[i],array[i]);
            }

    }








}
