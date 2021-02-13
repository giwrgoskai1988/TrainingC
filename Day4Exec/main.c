#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NO 0
#define YES 1

void main(void)
{
/*    int x,y; */

    /*printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("\n%d is bigger!",x>y?x:y);*/

    /*x=y=5;
    printf("\n%d    %d",x++,++y);
    printf("\n%d    %d",x++,++y);
    printf("\n%d    %d",x++,++y);
    printf("\n%d    %d",x++,++y);
    printf("\n%d    %d",x++,++y);
    printf("\n%d    %d",x++,++y);
    */

    /*printf("Enter two numbers!");
    scanf("%d %d",&x,&y);
    y = (x>=1 && x<=20) ? x : y;
    if(x>=1 && x <=20)
        y=x;

    printf("%d  %d",x,y);
    */

/*  printf("Enter age!");
    scanf("%d",&x);
    if(x>=21 && x<=65)
        printf("Adult");
*/

    int guess_value = -1;
    int number,number_of_guesses;
    int done = NO;

    printf("\n\nGetting a random Number!\n");
    srand((unsigned) time(NULL));
    number =rand();
    number_of_guesses=0;

    while(done == NO)
    {
        printf("Pick a number between 0 and %d>",RAND_MAX);
        scanf("%d",&guess_value);

        number_of_guesses++;

        if(number == guess_value)
        {
            done = YES;
        }
        else if( number<guess_value)
        {
            printf("You guessed high!");
        }
        else printf("You guessed low!");
    }

    printf("Gratz! You guessed right in %d guesses",number_of_guesses);
    printf("The number was %d",number);
}
