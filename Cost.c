#include<stdio.h>

int main()
{
    int X = 11;
    const int Y = 11;   //read only variable
    X++;         //allowed
    X--;
    X = 21;

    // Y++;      //Not-Allowed
    // Y--;
    // Y = 21;
    return 0;
}