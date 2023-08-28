#include<stdio.h>

int main()
{

int num=111;

void *ptr=&num;

//printf("%d ",*ptr);
printf("%d ",*(int *)ptr);

}

