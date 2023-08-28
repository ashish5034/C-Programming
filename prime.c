#include<stdio.h>
void printPrime(int s)
{
    int flag=1;
    int i;
    int j;
    for(i=2;i<=s;i++)
        {
        flag=1;
        for(j=2;j<=s;j++)
        {
            if(i%j==0){
                flag=0;

                break;
            }
        }
        if(flag==1){
            printf("%d",i);
        }
    }
}
int main()
{
    int n;int n1;
    printf("Enter Number");
    scanf("%d",&n);
    printPrime(n);
}
