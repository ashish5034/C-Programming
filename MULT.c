#include<stdio.h>
int doMult(int x,int y)
{
   int res=x*y;
   return res;

}
int main()
{
    int a,b;
    printf("ENTER A and B=");
    scanf("%d%d",&a,&b);
    int ans=doMult(a,b);
    printf("Multiplication=%d",ans);
}
