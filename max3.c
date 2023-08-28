//maximum between three numbers:
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three no:-");
    scanf("%d%d%d",&a,&b,&c);
    if ((a>b)&&(a>c))
    {
        printf("A is greater than B and C=%d",a);
    }else if(b>c)
    {
        printf("B is greater than A and C=%d",b);
    }else
    {
        printf("C is greater than A and B=%d",c);
    }
    return 0;
}
