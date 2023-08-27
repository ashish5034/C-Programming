#include<stdio.h>  

int Addition(int No1, int No2)
{
    int sum = 0;
    sum = No1 + No2;
    return sum;
}

int Substraction(int data1, int data2)
{
    int sum = 0;
    sum = data1 - data2;
    return sum;
}

int Multiplication(int num1, int num2)
{
    int sum = 0;
    sum = num1 * num2;
    return sum;
}

int main()


{
    int value1 = 10;
    int value2 = 11;
    int ans = 0;

    ans = Addition(value1, value2);

    printf("Addition is : %d\n",ans);

    ans = Substraction(value1, value2);

    printf("Subtraction is : %d\n",ans);

    ans = Multiplication(value1, value2);

    printf("Multiplication is : %d\n",ans);


    return 0;
}