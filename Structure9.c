#include<stdio.h>

struct Hello
    {
        int no;
        float d;

};
struct Demo

{
    int i;
    float f;
    struct Hello hobj1;
    struct Hello hobj2;
    
}dobj;

int main()
{
   

    printf("%d\n",sizeof(dobj));
    
    
    return 0;
}