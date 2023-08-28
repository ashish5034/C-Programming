//TO CHECK WHETHER NUMBER IS DIV BY 5 AND 11 BOTH:
#include<stdio.h>
int main()
{
    int a;
    printf("Enter number -");
    scanf("%d",&a);
    if((a%5==0)&&(a%11==0))
    {
        printf("Number is divisible by 5 and 11");
    }else
    {
        printf("Divisible");
    }
    return 0;
}
