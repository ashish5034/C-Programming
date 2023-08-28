//calculate average of 5 subject:
#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,avg;
    printf("Enter Subjects Marks:-");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    avg=(s1+s2+s3+s4+s5)/5;
    printf("Average=%d",avg);
    return 0;
}
