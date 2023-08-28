//Ex no 3:
#include<stdio.h>

struct box{
int ht; float wd;double len;
};

void displayBox(struct box b)
{
printf("HT:  %d  WD:  %f  LEN:  %lf \n",b.ht,b.wd,b.len);
}

int main()
{
    struct box b2;
    printf("Enter Ht \n");
    scanf("%d",&b2.ht);
    printf("Enter WD \n");
    scanf("%f",&b2.wd);
    printf("Enter Len \n");
    scanf("%lf",&b2.len);

    printf("HT:  %d  WD:  %f  LEN:  %lf \n",b2.ht,b2.wd,b2.len);

   printf("-------------------\n");
    displayBox(b2); // What is the type of b2
}

