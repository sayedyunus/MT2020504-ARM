/* CIRCULAR QUEUE |   |   |   |   |   |
                    0   1   2   3   4
*/

#include<stdio.h>
#include<stdlib.h>
void add_to_queue();
void remove_from_queue();
void print();

int head=-1,tail=-1;
int x,y;
int array[5];
int choice;

int main()
{
    while(1)
    {
      printf("\n1.Add_to_queue\n2.Remove_from_queue\n3.Print the elements of queue\n4.End\n");
      printf("\nEnter the choice");
      scanf("%d",&choice);
        switch(choice)
        {
        case 1: {
                add_to_queue();
                break;
                 }
        case 2:{
                remove_from_queue();
                break;
                 }
        case 3:{
                print();
                break;
                 }
        case 4: exit(0);
        default: printf("INVALID OPTION!!");
        }
    } 
}
    
void add_to_queue()
{
    if((head==0 && tail==4) || head==tail+1)
    {
    printf("------------------");
    printf("\nQUEUE IS FULL\n");
    printf("------------------");
    }
    else
    {
    printf("\nEnter a number to Insert :");
    scanf("%d",&x);
    if(head==-1)
        head=head+1;
    
    if(tail==4)
        tail=0;
    else 
    tail=tail+1;
        
    array[tail]=x;
    }
}


void remove_from_queue()
{
 if (head==-1 && tail==-1)
 {
    printf("-----------------------------");
    printf("\nTHE CIRCULAR QUEUE IS EMPTY\n");
    printf("-----------------------------");
 }
 else
 {
 y=array[head];
    if(head==4)
        head=0;
    else if(head==tail)
    {
        head=-1;
        tail=-1;
    }
    else 
    {
    head=head+1;
    printf("\n%d was deleted\n",y);
    }
 }   
}

void print()
{  int i;
    if(head==-1)
    {
    printf("------------------------------");
    printf("\nTHE CIRCULAR QUEUE IS EMPTY\n");
    printf("------------------------------");
    }
    else
    {
    i=head;
    if(head<=tail)
    {
        printf("\n\n");
        while(i<=tail)
            printf("%d ",array[i++]);
        printf("\n");
    }
    else
    {
        printf("\n\n");
        while(i<=4)
           printf("%d ",array[i++]) ;
        i=0;
        while(i<=tail)
            printf("%d ",array[i++]);
        printf("\n");
    }
    }
}