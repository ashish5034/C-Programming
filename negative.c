#include<stdio.h>
int main()
{
    int i,n,arr[20];
    printf("Enter no");
    scanf("%d",&n);
    printf("enter array element\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element =%d",i);
        scanf("%d",&arr[i]);
    }
    printf("\n Negative Element\n");
    for(i=0;i<n;i++)

    if(arr[i]<0)

    printf("%d\n",arr[i]);

    printf("\n Positive number\n",i);
    for(i=0;i<n;i++)
        if(arr[i]>0)
        printf("\n%d",arr[i]);
}
