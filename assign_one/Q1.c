#include<stdio.h>
int main()
{
    int a[3];
    printf("Enter any three numbers\n");
    for (int i = 0; i < 3; i++)
    {   scanf("%d",&a[i]);
    
    }
    if (a[0]>=a[1] && a[0]>=a[2])
    {
        printf("greatest number is %d",a[0]);
    }
    else if (a[1]>=a[0] && a[1]>=a[2])
    {
        printf("greatest number is %d",a[1]);
    }
    else
        printf("greatest number is %d",a[2]);
    
    return 0;
    
    
    
}