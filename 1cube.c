#include<stdio.h>
int doCube(int n1)
{
    int cube=n1*n1*n1;
    return cube;
}
int main()
{
    int n;
    printf("ENTER NUMBER=");
    scanf("%d",&n);
    int ans=doCube(n);
    printf("%d",ans);
}
