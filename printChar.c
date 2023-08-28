//print alphabet from A to Z
#include<stdio.h>
void charAz(char c)
{
for(int i=65;i<=90;i++)
    {
        printf("%c\t",i);
    }
    printf("\n");

    for(int i=97;i<=122;i++)
    {
        printf("%c\t",i);
    }
}
int main()
{
    int i;
    /*for(i=65;i<=90;i++)
    {
        printf("%c\t",i);
    }
    printf("\n");

    for(i=97;i<=122;i++)
    {
        printf("%c\t",i);
    }*/
    charAz(i);
}
