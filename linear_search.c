#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    printf("Enter the element to be searched: \n");
    scanf("%d",&x);
        if(x==a[0])
        {
            printf("Best case complexity\n");
            count++;
        }
        else if(x==a[n-1])
        {
            printf("Worst case complexity\n");
            count++;
        }
        else
        {
            printf("Average case complexity\n");
            count++;
        }
    if(count==0)
    {
        printf("Element not found\n");
    }
    return 0;
}