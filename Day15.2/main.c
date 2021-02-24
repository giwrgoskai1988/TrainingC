#include <stdio.h>
#include <stdlib.h>


#ifndef NULL
#define NULL 0
#endif // NULL


struct list
{
    int ch;
    struct list *next_rec;
};

typedef struct list LIST;
typedef LIST *LIST_PTR;

LIST_PTR add_to_list(int,LIST_PTR);
void show_list(LIST_PTR);
void free_memory_list(LIST_PTR);

void main()
{
    LIST_PTR head = NULL;
    int i = 0 ;
    int ch;
    char trash[256];

    while(i++ < 5)
    {
        ch = 0 ;
        printf("\nEnter character %d", i);

        do
        {
            printf("\nMust be a to z: ");
            ch = getc(stdin);
            gets(trash);

        }while((ch <'a' || ch >'z') && (ch <'A' || ch > 'Z'));

        head = add_to_list(ch,head);
    }

    show_list(head);
    free_memory_list(head);
}

LIST_PTR add_to_list(int ch,LIST_PTR head)
{
    LIST_PTR new_rec = NULL;
    LIST_PTR marker_rec = NULL;
    LIST_PTR previous_rec = NULL;

    new_rec = (LIST_PTR)malloc(sizeof(LIST));

    if(!new_rec)
    {
        printf("\nNot enough memory!!!\n");
        exit(1);
    }

    new_rec -> ch = ch;
    new_rec -> next_rec = NULL;

    if(head == NULL)
    {
        head = new_rec;
    }
    else
    {
        if(new_rec -> ch < head -> ch)
        {
            new_rec -> next_rec = head;
            head = new_rec;
        }
        else
        {
            marker_rec = head -> next_rec;
            previous_rec = head;

            if(marker_rec == NULL)
            {
                previous_rec -> next_rec = new_rec;
            }
            else
            {
                while((marker_rec -> next_rec != NULL))
                {
                    if (new_rec -> ch < marker_rec -> ch)
                    {
                        new_rec -> next_rec = marker_rec;
                        if(new_rec -> next_rec != previous_rec -> next_rec)
                        {
                            printf("\nError!!!!");
                            getc(stdin);
                            exit(0);
                        }
                        previous_rec -> next_rec = new_rec;
                        break;
                    }
                    else
                    {
                        marker_rec = marker_rec -> next_rec;
                        previous_rec = previous_rec -> next_rec;
                    }
                }

                if(marker_rec -> next_rec == NULL)
                {
                    if(new_rec -> ch < marker_rec -> ch)
                    {
                        new_rec -> next_rec = marker_rec;
                        previous_rec -> next_rec = new_rec;
                    }
                    else
                    {
                        marker_rec -> next_rec = new_rec;
                        new_rec -> next_rec = NULL;
                    }
                }


            }
        }
    }


    return head;

}


void show_list(LIST_PTR head)
{
    LIST_PTR current;
    int counter = 1;

    printf("\n\nRec  Addr  POSITION  Data  NEXT  Rec  Addr\n");
    printf("========  ========   ====   =============\n");

    current = head;

    while(current!= NULL)
    {
        printf("  %X   ",current);
        printf("    %2i       %c",counter++,current->ch);
        printf("     %X   \n",current->next_rec);
        current = current -> next_rec;
    }
}

void free_memory_list(LIST_PTR head)
{
    LIST_PTR current , next_rec;
    current = head;

    while(current != NULL)
    {
        next_rec = current -> next_rec;
        free(current);
        current = next_rec;

    }
}
