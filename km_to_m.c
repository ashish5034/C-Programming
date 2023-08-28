//Kilometer to meter and meter to centimeter:
#include<stdio.h>
int main()
{
    int km,m,cm;
    printf("Enter the value in m and in cm =");
    scanf("%d%d",&km,&m);
    km=m*1000;
    m=cm*100;
    printf("km=%d\nm=%d",km,m);
    return 0;
}
