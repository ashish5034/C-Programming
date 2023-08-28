#include<stdio.h>
int getFactorial(int num);
{
    int i=1;
    int fact=1;
    for(i=1;i<=num;i++)
        {
    fact=fact*i;
    printf("%d",fact);
    }
}
int main()
{
    int x;
    printf("enter=")'
    scanf("%d",&x);
    getFactorial(x);

}
