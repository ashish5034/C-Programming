//Ex No 1

#include<stdio.h>

struct box
{
int ht;
 float wd;
 double len;
};

int main()
{
    struct box b1={11,11.11,22.22};

    printf("HT:  %d  WD:  %f  LEN:  %lf",b1.ht,b1.wd,b1.len);


}

