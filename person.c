#include<stdio.h>
struct person
{
    char name[10];
    char add[10];
    int pin;
};
void displayData(struct person q[])
{
   for(int i=1;i<=2;i++)
   {
        puts(q[i].name);
    puts(q[i].add);
    puts(q[i].pin);
   }
}
int main()
{
    struct person p[5];
    for(int i=1;i<=2;i++)
    {
        printf("Enter Name ");
        fflush(stdin);
        gets(p[i].name);
        printf("Enter add ");
        fflush(stdin);
        gets(p[i].add);
        printf("ENter pin code");
        scanf("%d",&p[i].pin);
    }
    displayData(p);
}
