#include<stdio.h>
int addition(int No1,int No2)
{
    int ans =0;
    ans=No1+No2;
    return ans;
}
int main()
{
    int Value1 =0, Value2 = 0;
    int ret=0;

    printf("Enter 1st Numeber:\n");
    scanf("%d",&Value1);

    printf("Enter 2nd Number:\n");
    scanf("%d",&Value2);

    ret = addition(Value1,Value2);
    printf("Addition is : %d\n",ret);

    return 0;
}