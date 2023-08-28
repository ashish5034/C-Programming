#include<stdio.h>
void doAdd(int n1,int n2)
{
    int add=n1+n2;
    printf("Addition    of Num1 %d    and Num2 %d   =    %d",n1,n2,add);
}
void doSub(int n1,int n2)
{
    int sub=n1-n2;
    printf("\nSubtraction of Num1 %d   and  Num2 %d  =   %d",n1,n2,sub);
}
void doMult(int n1,int n2)
{
    int mult=n1*n2;
    printf("\nMultiplication of Num1 %d and  Num2 %d  =  %d",n1,n2,mult);
}
void doDiv(int n1,int n2)
{
    int div=n1/n2;
    printf("\nDivision   of Num1 %d     and  Num2 %d  =  %d",n1,n2,div);
}

int main()
{
    int num1,num2;
    printf("Enter numbers To Calculate=");
    scanf("%d%d",&num1,&num2);
    doAdd(num1,num2);
    doSub(num1,num2);
    doMult(num1,num2);
    doDiv(num1,num2);

}

