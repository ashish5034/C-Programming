//To print whether given number is odd or even
#include<stdio.h>
int oddEven(int o)
{
    if(o%2==0)
        printf("The number %d is Even",o);
    else
        printf("the number %d is Odd ",o);
}
int main()
{
    int n;
    printf("Enter The number=");
    scanf("%d",&n);
    /*if(n%2==0)
    {
        printf("The number %d is Even",n);
    }else
    {
        printf("The number %d is Odd",n);
    }*/
    oddEven(n);
}
