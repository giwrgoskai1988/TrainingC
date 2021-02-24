#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//LinkedLists

struct data
{
    char name[20];
    struct data *next;
};

typedef struct data PERSON;
typedef PERSON *LINK;

void main()
{
    LINK head = NULL;
    LINK new = NULL;
    LINK current = NULL;

    new = (LINK)malloc(sizeof(PERSON));  //assume success
    new -> next = head;
    head = new;
    strcpy(new -> name,"1");

    current = head;
    //Travel to the end of list
    while(current -> next != NULL)
    {
        current = current->next;
    }

    new = (LINK)malloc(sizeof(PERSON)); //assume success again
    //set last link that was found from above to show to the new link
    current -> next = new;
    new -> next = NULL; //define that the new link is the last and shows nowhere
    strcpy(new -> name, "2");


    //insert between 1 and 2

    new = (LINK)malloc(sizeof(PERSON));
    new -> next = head -> next;
    head -> next = new;
    strcpy(new -> name , "Between one and two");

    current = head;
    while(current != NULL)
    {
        printf("%s\n",current -> name);
        current = current -> next;
    }


}
