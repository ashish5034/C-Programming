#include<stdio.h>

int main()
{
    int Arr[4] = {11,21,51,101};

    printf("Base adress of aray: %d\n", Arr);
    printf("Base adress of first element of array: %d\n", &(Arr[0]));
    printf("First element of array: %d\n",Arr[0]);

    printf("Address of second element is:%d\n",&(Arr[1]));
    printf("Address of second element is:%d\n",&(Arr[2]));
    printf("Address of second element is:%d\n",&(Arr[3]));
    printf("Size of whole aray: %d\n", sizeof(Arr));
    printf("Size of second element of array: %d\n",sizeof(Arr[1]));

    return 0;
}