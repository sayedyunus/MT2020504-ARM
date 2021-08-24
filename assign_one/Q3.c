#include<stdio.h>
int main()
{   int a[20];
    int count=0;
    int j=0;
    printf("\nEnter any 20 numbers\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d",&a[i]);
    }
    
    while (j<20)
    
    {
            if (a[j]%2==0)
            {
                count++;
                j++;
            }
            else
            j++;
            
    }

    printf("\n%d even numbers are there",count);
    return 0;
    
}
