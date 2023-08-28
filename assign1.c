/*Write a program that compares two given dates. To store date
use structure say date that contains three members namely
date, month and year. If the dates are equal then display
message as "Equal" otherwise "Unequal".*/
#include<stdio.h>
struct data
{
    int day,month,year;
};
int date(struct data d3, struct data d4)
{
    if(d3.day==d4.day && d3.month==d4.month || d3.year!=d4.year)
     printf("Equal\n");
    else
     printf("Unequal");
}
int main()
{
    struct data d1,d2;
    printf("Enter first date\n");
    scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
    printf("Enter the second date\n");
    scanf("%d%d%d",&d2.day,&d2.month,&d2.year);
    /*if(d1.day==d2.day && d1.month==d2.month || d1.year!=d2.year)
     printf("Equal\n");
    else
     printf("Unequal");*/
     date(d1,d2);
    return 0;
}


