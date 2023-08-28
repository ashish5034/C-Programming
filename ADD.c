#include<stdio.h>
void doAdd(int x,int y)//function def
{
    int res=x+y;//function declaration
    printf("ADD is=%d\n",res);
}
int main()
{
    int a,b;
    printf("ENTER a,b-");
    scanf("%d%d",&a,&b);
    doAdd(a,b);//function call
}
