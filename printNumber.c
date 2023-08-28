//print 1-N numbers
#include<stdio.h>
void printNumber(int num)
{
    for(int i=0;i<=num;i++)
        printf("%d\n",i);
}
int main()
{
    int n,i;
    printf("Enter Number");
    scanf("%d",&n);
   /* for(i=0;i<=n;i++)
    {
        printf("%d\n",i);
    }*/
    printNumber(n);
}
