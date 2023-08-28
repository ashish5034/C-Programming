#include<stdio.h>
int doAdd(int n1,int n2)
{
    int add=n1+n2;
    return add;
    //printf("Addition    of Num1 %d    and Num2 %d           =    %d",n1,n2,add);
}
int doSub(int n1,int n2)
{
    int sub=n1-n2;
    return sub;
    //printf("\nSubtraction    of Num1 %d   and  Num2 %d      =    %d",n1,n2,sub);
}
int doMult(int n1,int n2)
{
    int mult=n1*n2;
    return mult;
    //printf("\nMultiplication   of Num1 %d   and  Num2 %d    =    %d",n1,n2,mult);
}
int doDiv(int n1,int n2)
{
    int div=n1/n2;
    return div;
    //printf("\nDivision    of Num1 %d   and  Num2 %d         =    %d",n1,n2,div);
}
int doFact(int n1)
{
    int i,fact=1;
    for(i=1;i<=n1;i++)
    {
      fact=fact*i;
    }
    return fact;
    //printf("\nFactorial    of Num1 %d                       =    %d",n1,fact);
}
int allDigitsum(int n1)
{
    int dummy;
    int sum=0;
    int x;
    dummy=n1;
    while(n1>0)
    {
        x=n1%10;
        sum=sum+x;
        n1=n1/10;
    }
    return sum;
    //printf("\nThe sum of all digit in %d is                 = %d\n",dummy,sum);
}
int sumOfDigit(int n1)
{
    int sum=0;
    while(n1!=0){
        sum=sum+(n1%10);
        n1=n1/10;
    }
    return sum;
   //printf("\nThe sum of all digit in number is                  = %d\n",sum);
}
int main()
{
    int num1,num2;
    printf("Enter numbers To Calculate=");
    scanf("%d%d",&num1,&num2);
    int Add=doAdd(num1,num2);
    printf("Addition    of Num1 %d    and Num2 %d           =    %d",num1,num2,Add);
    int Sub=doSub(num1,num2);
    printf("\nSubtraction    of Num1 %d   and  Num2 %d      =    %d",num1,num2,Sub);
    int Mult=doMult(num1,num2);
    printf("\nMultiplication   of Num1 %d   and  Num2 %d    =    %d",num1,num2,Mult);
    int Div=doDiv(num1,num2);
    printf("\nDivision    of Num1 %d   and  Num2 %d         =    %d",num1,num2,Div);
    int Fact=doFact(num1);
    printf("\nFactorial    of Num1 %d                       =    %d",num1,Fact);
    int Sum=allDigitsum(num1);
    printf("\nThe sum of all digit in %d is                 = %d\n",num1,Sum);
    int Summ=sumOfDigit(num1);
    printf("\nThe sum of all digit in number is                  = %d\n",Summ);
}

