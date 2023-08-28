#include<stdio.h>
void doPerimeter(int x,int y)
{
    int per=2*(x+y);
    printf("Perimeter of Rectangle=%d",per);
}
int main()
{
    int a,b;
    printf("Enter A and B=");
    scanf("%d%d",&a,&b);
    doPerimeter(a,b);
}

