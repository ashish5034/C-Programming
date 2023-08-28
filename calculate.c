#include<stdio.h>
void doCal(int x,int y,int z)//function def
{
    int add=x+y;
    int sub=x-y;
    int mult=x*y;
    int div=x/y;
    int area=2*3.142*z;//function declaration
    printf("ADD is=%d\n SUb=%d\n Mult=%d\n Div=%d\n area=%d\n",add,sub,mult,div,area);
}
int main()
{
    int a,b,r;
    printf("ENTER a,b and r=");
    scanf("%d%d%d",&a,&b,&r);
    doCal(a,b,r);//function call
}

