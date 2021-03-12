#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void name_prompt(char *,char *,char *);
void search_str(char *text);
int strstr_case_insensitive(char *str1,char *str2);


int main()
{
    //Exec 5
   // char first_name[50],last_name[50],fathers_name[50];

    //name_prompt(first_name,last_name,fathers_name);

    //Exec 7
    char *text_to_search = "Hello my name is ...";
    search_str(text_to_search);


    //Exec 8




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




void search_str(char *text)
{
    char *str_input = malloc(sizeof(char)*100);
    int choice;
    int times = 0;
    puts("Type a word (max 100 characters) to search if it exists: ");
    fflush(stdin);
    gets(str_input);

    puts("Press 1 to search exact word or 2 to search ignoring cases: ");
    fflush(stdin);
    scanf("%d",&choice);

    if(choice == 1)
        str_input = strstr(text,str_input);

    else
        times = strstr_case_insensitive(text,str_input);

    if(str_input == NULL || times == 0)
        puts("No match was found!");
    else
        printf("\n%s was found in the text!!",str_input);

}

int strstr_case_insensitive(char *str1,char *str2)
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
    return times_found;
}




