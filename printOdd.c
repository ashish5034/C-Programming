//to print all odd no till N
#include<stdio.h>
void printOddno(int no)
{
    for(int i=0;i<=no;i++)
    {
        if(i%2==1)
            printf("%d\n",i);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter a Number \n");
    scanf("%d",&n);
    /*for(i=0;i<=n;i++)
    {
        if(i%2==1)
            printf("%d\n",i);
    }
    printf("\n");
    */
    printOddno(n);
}
