#include<stdio.h>
void disNeg(int a[])
            {
                int i;int n;

               printf("\n Negative Element\n");
    for(int i=0;i<n;i++)

    if(a[i]<0)

    printf("%d\n",a[i]);

    printf("\n Positive number\n");
    for(int i=0;i<n;i++)
        if(a[i]>0)
        printf("\n%d",a[i]);
            }

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
disNeg(arr);
            }
