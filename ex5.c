//Ex no 5:


#include<stdio.h>

struct box
{
int ht; float wd;double len;
};
void displayBoxArray(struct box b[])
{
    for(int i=0;i<3;i++)
printf("HT:  %d  WD:  %f  LEN:  %lf \n",b[i].ht,b[i].wd,b[i].len);
}
int main()
{
    struct box b[3];

    for(int i=0;i<3;i++){
              printf("Enter Ht \n");
              scanf("%d",&b[i].ht);
              printf("Enter WD \n");
             scanf("%f",&b[i].wd);
             printf("Enter Len \n");
             scanf("%lf",&b[i].len);
    }

    printf("-------------------\n");

      for(int i=0;i<3;i++){

              printf("HT %d ",b[i].ht);

             printf("WD  %f ",b[i].wd);

             printf("LEN %lf \n",b[i].len);
    }

     printf("\n +++++++++++++++++++++++++++\n");
displayBoxArray(b);



}

