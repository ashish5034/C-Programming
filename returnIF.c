#include<stdio.h>
int evenOdd(int n1)
{
    if(n1%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int num1;
    printf("Enter number -");
    scanf("%d",&num1);
    int res=evenOdd(num1);
    if(res==1){
    printf("Number is Even");
}
else
    printf("Number is Odd");
}
