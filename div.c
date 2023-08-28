#include<stdio.h>
void doDiv(int x,int y)
{
    int res=x/y;
    printf("Division=%d",res);
}
int main()
{
    int a,b;
    printf("Enter A and B");
    scanf("%d%d",&a,&b);
    doDiv(a,b);
}
