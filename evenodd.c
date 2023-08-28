//CHECK WHETHER NUMBER IS ODD OR EVEN
#include<stdio.h>
int main()
{

    int a;
    printf("Enter number ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Entered number is even=%d",a);
    }else{
    printf("Entered no is odd=%d",a);
    }
    return 0;
}
