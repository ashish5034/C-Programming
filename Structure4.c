
#include<stdio.h>
struct Demo

{
  int *p;
  float *q;
  double d;
};

int main()
{
    
    struct Demo obj;
    int i=11;
    float f=90.90;

    obj.p=&i;
    obj.q=&f;
    obj.d=90.999;
    
    printf("%d\n",*(obj.p)); //11   
    printf("%f\n",*(obj.q)); //90.90    
    printf("%f",obj.d);      //90.99999
    
    return 0;
}