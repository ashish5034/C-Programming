//input month number abd print no of days in that month
#include<stdio.h>
int main()
{
    int month;
    printf("Enter month no-");
    scanf("%d",&month);
    switch(month)
    {
        case 1:printf("JAN");
        break;
        case 2:printf("FEB");
        break;
        case 3:printf("MARCH");
        break;
        case 4:printf("APRIL");
        break;
        case 5:printf("MAY");
        break;
        case 6:printf("JUNE");
        break;
        case 7:printf("JULY");
        break;
        case 8:printf("AUG");
        break;
        case 9:printf("SEP");
        break;
        case 10:printf("OCT");
        break;
        case 11:printf("NOV");
        break;
        case 12:printf("DEC");
        break;
    }
    return 0;
}
