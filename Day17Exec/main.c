#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void name_prompt(char *,char *,char *);
char *get_input_str(char *str_input);
void search_str(char *str_input,char *file_name, int choice);
char *strstr_case_insensitive(char *str1,char *str2);
int get_choice(void);


int main()
{
    //Exec 5
   // char first_name[50],last_name[50],fathers_name[50];

    //name_prompt(first_name,last_name,fathers_name);


    //Exec 7,8,9

    puts("Type a word (max 100 characters): ");
    char *str_input = get_input_str(str_input);
    puts("Type a file path to search(100 characters  go to line 94 of main and change the filename): ");
    char *file_to_search = get_input_str(file_to_search);
    puts("Press 1 to search exact cases or 2 to search ignoring cases: ");
    int choice = get_choice();
    search_str(str_input,file_to_search,choice);





}


//EXEC 5
void name_prompt(char fn[], char ln[], char ftn[])
{
    puts("Enter your last name: ");
    gets(ln);
    puts("Enter your first name: ");
    gets(fn);
    puts("Enter your fathers name: ");
    gets(ftn);

    char fn1[4],ftn1[4];
    fn1[0] = fn[0];
    fn1[1] = '.';
    fn1[2] = ' ';

    ftn1[0] = ftn[0];
    ftn1[1] = '.';
    ftn1[2] = ' ';

    char *name = malloc(sizeof(char)*80);

    strcpy(name,fn1);
    strcat(name,ftn1);
    strcat(name,ln);


    printf("%s\n",name);
}


int get_choice()
{
    int choice = 0 ;
    do
    {
        fflush(stdin);
        scanf("%d",&choice);
    }while(choice < 1 || choice >2);

    return choice;

}

void search_str(char *str_input,char *file_name,int choice)
{
    int line= 1;
    char *(*Func)(char *str_const, char *str_in);
    if(choice == 1)
    {
        Func = strstr;
    }

    else
        Func = strstr_case_insensitive;

    FILE *fh = fopen("C:\\Users\\Á\\source\\repos\\MyGit\\TrainingC\\Day17Exec\\44.txt","r");

    if(fh == NULL)
    {
        puts("Error in file name! Exiting...");
        exit(1);
    }

    char ch[512];


    while((fgets(ch,512,fh)!= NULL))
    {
        if((Func(ch,str_input))!= NULL)
        {
            printf("\nFound in line  %d!",line);
        }
        line++;
    }



}

char *strstr_case_insensitive(char *str1,char *str2)
{
    int i;
    int k = 0;
    int a,b ;

    int times_found = 0 ;
    for( i = 0 ; i < strlen(str1); i++)
    {
        a= *(str2+k);
        b = *(str1+i);
        if( k == strlen(str2))
            times_found++;
        if(b == a || b == a+32 || b == a - 32 )
        {
            k++;
        }
        else
        {
            k = 0;
        }

    }
    return times_found != 0  ? str2 : NULL;
}


char *get_input_str(char *str_input)
{
    str_input = malloc(sizeof(char)*100);
    fflush(stdin);
    gets(str_input);

    if(str_input == NULL)
    {
        puts("Error mem alloc! Exiting the programm");
        exit(1);
    }


    return str_input;

}

