#include <stdio.h>

void calculator(void);

int main()
{
    int counter = 0;

    //Exec 1

    for(; counter < 5 ; counter++ )
    {
        if(counter == 3)
            continue;

        printf("%d\n",counter);
    }

    puts("------------------------------------------------");

    //Exec 2
    for (counter = 0 ; counter < 5 ; counter++)
    {
        if(counter == 3)
            break;

        printf("%d\n",counter);
    }

    puts("------------------------------------------------");

    //Exec 3

    system("dir");

    puts("------------------------------------------------");


    //Exec 4

    char answer = 'Y';

    switch  (answer)
    {
        case 'N': puts("You answered N");
        break;
        case 'Y': puts("You answered Y");
    }

    puts("------------------------------------------------");

    //Exec 5,6

    int choice =4;

    if(choice == 1 )
        puts("You answered 1");
    else if(choice == 2)
        puts("You answered 2");
    else
        puts("You didnt answer 1 or 2");


    puts("------------------------------------------------");


    //Exec 7,8
    int choose = 1;
    while(choose !=0)
    {
        calculator();
        puts("\nPress 1 to run again or 0 to exit : ");
        scanf("%d",&choose);
    }

    return 0;
}


void calculator()
{
    int nmbr_1,nmbr_2;
    char input_operator;

    puts("Enter two integers :");
    scanf(" %d %d",&nmbr_1,&nmbr_2);
    puts("Enter operator : ");
    scanf(" %c",&input_operator);  //alway space before %c when it is after a puts to discard the \n character

    switch(input_operator)
    {
        default : puts("Please enter one of the operators e.g.(+ , - , * , /)");
        break;
        case '+' : printf("Sum is : %d",nmbr_1 + nmbr_2);
        break;
        case '-': printf("Substraction is  : %d",nmbr_1 - nmbr_2);
        break;
        case '*' : printf("Multiplication is : %ld", nmbr_1 * nmbr_2);
        break;
        case '/' :
            if(nmbr_2 == 0 )
            {
                puts("Cant divide by zero");
            }
            else
                printf("Division is : %.2f",(float)nmbr_1/nmbr_2);
        break;
    }

}
