//Diameter ,area and circumference of circle:
#include<stdio.h>
int main()
{
    int di,a,c,r;
    int pi=3.142;
    printf("Enter radius of circle=");
    scanf("%d",&r);
    di=2*r;
     a=pi*r*r;
     c=2*pi*r;
    printf("Diameter =%d\nArea=%d\nCircumference=%d",di,a,c);
    //a=pi*r*r;
    //printf("Area=%d\n",a);
    //c=2*pi*r;
    //printf("Circumference=%d",c);
    return 0;
}
