#include<stdio.h>
int areaCircle(int a)//declaire
{
    int area=3.142*a*a;//definition
    return area;
}
int circumCircle(int b)
{
    int circum=2*3.142*b;
    return circum;
}
int main()
{
    int r;
    printf("ENTER RADIUS");
    scanf("%d",&r);
    int ans=areaCircle(r);//call function
    printf("Area Of Circle=%d\n",ans);
    int ans1=circumCircle(r);
    printf("Circumference of circle=%d",ans1);
}
