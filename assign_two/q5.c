/* QUEUE |   |   |   |   |   |
           0   1   2   3   4
*/


#include<stdio.h>
#include<stdlib.h>
void add_to_queue();
void remove_from_queue();
void print();

int head=-1,tail=-1;
int x;
int array[5];
int choice;

int main()
{
    while(1)
    {
      printf("\n1.Add_to_queue\n2.Remove_from_queue\n3.Print the elements of queue\n4.end\n");
      printf("\nEnter the choice ");
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
    if(tail==4)
    {
    printf("------------------");
    printf("\nQUEUE IS FULL\n");
    printf("------------------");
    }
    else
    { if(head==-1)   
        head=0;
          printf("enter the element:");
          scanf("%d",&x);
          tail=tail+1;
          array[tail]=x;
     
}
     
 }


void remove_from_queue()
{
 if (head==-1 && tail==-1)
 {
     printf("------------------");
     printf("\nQUEUE IS EMPTY\n");
     printf("------------------");
 }
 else
 {
    printf("Element removed from queue is %d\n",array[head]);
    head=head+1;

 } 

}

void print()
{
    for (int i = head; i <=tail; i++)
    {
        
        printf(" %d \t",array[i]);
        
    }
    
}