#include <stdio.h>

#define QUIT 9

int main()
{
    //Exec 1
    printf("Go to new Line \n");
    puts("New line");

    //Exec 2
    unsigned int y;
    char c,b;

    puts("Enter one character , one integer and one character: ");
    scanf("%c %u %c",&c,&y,&b);
    printf("char 1 : %c \ninteger : %u \nchar 2 :%c",c,y,b);

    //Exec 3,4
    int a;
    puts("\nPlease enter an even integer above 0 : ");

    do
    {
        scanf("%d",&a);
    }while(a == 0 || a % 2 != 0 );

    //Exec 5,6

    int array[6];
    int x;
    int i;

    for( i = 0 ; i < 6 && x != 99 ; i++)
    {
        puts("Enter 6 even integers or 99 to quit!");
        scanf("%d",&x);
        while( x == 0 || ( x != 99 && x % 2 == 1 ))
        {
            puts("Input must be an even integer above 0 or 99 to quit");
            scanf("%d",&x);
        }

        array[i] = x;

    }


    for( i = 0 ; i < 6 ; i++)
    {
        printf("Number %d  is : \t %d\n",i,array[i]);
    }



    //Exec 9
    int get_menu_choice(void);
    void print_report(void);
    int choice = 0 ;

    while(choice != QUIT)
    {
        choice = get_menu_choice();
        if(choice == 1)
            printf("\nBeeping \a\a\a\n");
        else if(choice == 2)
            printf("\n Backspace \b\b\b\n");
        else if( choice == 3)
            printf("\n New line \n\n\n");
        else if( choice == 4)
            printf("\t Horizontal tab \t\t\t tab\n");
        else if( choice == 5)
            printf("\\ Slash\n");
        else if (choice == 6)
            printf("\? Question mark \?\?\?\n");
        else if (choice == 7)
            printf("\'  Ears\n");
        else if (choice == 8)
            print_report();
    }

    puts("\nYou choose to quit!");


    //Exec 10

    float float_x , float_y;

    puts("Enter two floats:");
    scanf("%f %f",&float_x,&float_y);
    printf("Sum is : %f\n",float_x*float_y);
    return 0;
}


int get_menu_choice()
{
    int selection =0;

    do
    {
        puts("1 - Beeping");
        puts("2 - Backspace");
        puts("3 - New Line");
        puts("4 - Horizontal tab");
        puts("5 - Slash");
        puts("6 - Question Mark");
        puts("7 - Ear");
        puts("8 - Print Report");

        scanf("%d",&selection);

    }while (selection < 1 || selection > 9);
    return selection;
}

void print_report()
{
    puts("\tSAMPLE REPORT");
    puts("Sequence\tMeaning");
    puts("========\t=========");
    puts("\\a\t\tbell alert");
    puts("\\n\t\tnew line");
    puts("\\b\t\tbackspace");
    puts("\\t\t\thorizontal tab");
    puts("\\\t\tslash");
    puts("\\?\t\tquestion mark");
    puts("\\'\t\tear");

}

