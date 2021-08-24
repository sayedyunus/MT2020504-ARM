#include<stdio.h>
int main()
{   int a[15];
    int num=0;
    int j=0;
    printf("enter the numbers\n");
    for (int i = 0; i < 15; i++)
    {
        scanf("%d",&a[i]);
    }
    
    while (j<15)
    
    {
            if (num<=a[j])
            {
                num=a[j];
                j++;
            }
            else
            j++;
            
    }

    printf("greatest number is %d",num);
    return 0;
    
}
