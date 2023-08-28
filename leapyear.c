//leap year
#include<stdio.h>
int main()
{

    int year;
    printf("Enter the year-");
    scanf("%d",&year);
    if(((year%4==0)&&(year%400==0))||(year%100==0))
    {
        printf("Leap year-%d",year);
    }else {
    printf("Not leap year-%d",year);
    }
    return 0;
}
