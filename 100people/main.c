#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define YES 1
#define NO 0


struct record
{
    char fname[16];
    char lname[21];
    char phone[11];
    long income;
    int month;
    int day;
    int year;
};

struct record list[MAX];

int last_entry = 0 ;

void get_data(void);
void display_report(void);
int continue_function(void);


void main()
{
    int cont = YES;
    int ch;

    while(cont == YES)
    {
        puts("MENU");
        puts("========");
        puts("[1] - Enter Names ");
        puts("[2] - Print Report");
        puts("[3] - Quit");
        puts("Enter your selection : ");

        fflush(stdin);
        ch = getchar();
        fflush(stdin);

        switch(ch)
        {
            case '1': get_data();
                      break;
            case '2': display_report();
                      break;
            case '3': puts("Goodbye");
                      cont = NO;
                      break;
            default : puts("Invalid choice! Please choose between 1 and 3!");
                      break;
        }

    }

}

void get_data(void)
{
    int cont;

    for(cont = YES; last_entry < MAX && cont == YES ; last_entry++)
    {
        printf("\n\nEntering information for Person %d.",last_entry+1);
        printf("\n\nEnter first name :");
        fflush(stdin);
        gets(list[last_entry].fname);

        printf("\nEnter last name :");
        gets(list[last_entry].lname);

        printf("\nEnter 10 digit phone :");
        gets(list[last_entry].phone);

        printf("\nEnter yearly income: ");
        scanf("%ld",&list[last_entry].income);


        printf("\nEnter birthday :");

        do
        {
            printf("\n\tMonth (1-12) :");
            scanf("%d", &list[last_entry].month);
        }while(list[last_entry].month < 1 || list[last_entry].month > 12);

        do
        {
            printf("\n\tDay (1-31) :");
            scanf("%d", &list[last_entry].day);
        }while(list[last_entry].day < 1 || list[last_entry].day > 31);

        do
        {
            printf("\n\Year (1940-2000) :");
            scanf("%d", &list[last_entry].year);
        }while(list[last_entry].year < 1940 || list[last_entry].year > 2000);

        cont = continue_function();
    }

    if(last_entry == MAX)
        puts("Maximum Number of people have been entered!");
}


void display_report()
{
    long grand_total = 0 ;

    int x,y;

    puts("-----------------------------------------------");
    puts("REPORT");
    puts("==========");

        for ( y = 0 ; y < last_entry; y++)
        {
            printf("\n\t%s %s %s %ld", list[y].fname ,list[y].lname , list[y].phone, list[y].income);
            grand_total += list[y].income;
        }


    printf("\n\nTotal income is %ld and average income is %ld\n",grand_total,grand_total/last_entry);
    puts("End of report!");

}


int continue_function(void)
{
    int ch ;
    puts("Do you want to continue?(Y\\N): ");
    fflush(stdin);
    ch = getchar();

    while(ch != 'n' && ch != 'N' && ch!= 'y' && ch!='Y')
    {
        puts("Invalid choice.Please press Y for yes or N for No");
        fflush(stdin);
        ch = getchar();
    }

    fflush(stdin);

    if(ch =='n' || ch == 'N')
        return(NO);
    else
        return(YES);
}
