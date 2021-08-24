#include<stdio.h>

int main()
{ 
    int a[20];
    int num;
    int m=0;
    
    printf("\nenter any 20 numbers\n");
    
    while (m<20)            //to enter any 20 numbers
    {
        scanf("%d",&a[m]);
        m++;
    }
    
    for (int i = 0; i < 20; i++)
    {
        for (int k = i+1; k < 20; k++)
        {
            if (a[i]>a[k])              //comparsion of 1st element with subsequent elements and then replacing the 1st one with smallest, then compairing 2nd element and so on
            {
                num=a[i];
                a[i]=a[k];
                a[k]=num;
            }
        }
    
    }
    printf("\nThe ascending order is:");
    for (int j = 0; j < 20; j++)
    {    printf("\n%d", a[j]);
    }
return 0;

}
