//check leap year or not
#include<stdio.h>
int leapYr(int y)
{
  if(y%4==0||y%400==0&&y%100==0)
        printf("LEAP YEAR");
  else
    printf("NOT LEAP YEAR");
}
int main()
{
   int yr;
printf("Enter Year Number:-");
scanf("%d",&yr);
 leapYr(yr);
}
