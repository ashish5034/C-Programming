//TO FIND THIRD ANGLE OF TRIANGLE:
#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter Measurement of two angle= ");
    scanf("%d%d",&a1,&a2);
    a3=180-(a1+a2);
    printf("Measurement of third angle=%d",a3);
    return 0;
}
