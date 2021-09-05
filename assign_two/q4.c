/*EMPTY ASCENDING STACK {fill from 0 --> bottom to top} SP will point to the empty location
    4| |
    3| |
    2| |
    1| |
    0| |
*/

#include <stdio.h>
#include <stdlib.h>
int top=0, array[5];
int i;
void push();
void pop();
void print();
  
int main()
{
    int x;
    while(1)    
    {
        printf("\n1.Push\n2.Pop\n3.Print\n4.End");
        printf("\n\nEnter the choice:");
        scanf("%d",&x);
         
        switch(x)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: print();
                    break;
            case 4: exit(0);
             
            default: printf("\nINVALID CHOICE!!");
        }
    }
}
  
void push()
{
    int y;
    if(top==5)
    {   printf("------------------");
        printf("\nSTACK IS FULL\n");
        printf("------------------");
    }
    else
    {
        printf("\nEnter elements into the stack:");
        scanf("%d",&y);
        array[top]=y;
        top=top+1;
    }
}
  
void pop()
{
    if(top==0)
    {   printf("------------------");
        printf("\nSTACK IS EMPTY\n");
        printf("------------------");
    }
    else
    {    top=top-1;
        printf("\nPopped element:  %d",array[top]);
       
    }
}
  
void print()
{
    if(top==0)
    {   printf("------------------");
        printf("\nSTACK IS EMPTY\n");
        printf("------------------");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        if(top==5)
        {
            for(i=4;i>=0;i--)
            printf("| address-->%d|\telement-->%d |\n",i,array[i]);
        }
        else
        {   for(i=top-1;i>=0;i--)
            printf("| address-->%d|\telement-->%d |\n",i,array[i]);
        }
    }
}
