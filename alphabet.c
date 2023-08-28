// character is alphabet or not
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Character-");
    scanf("%c",&ch);
    if(((ch>'a')&&(ch<'z'))||((ch>'A')&&(ch<'z')))
    {
        printf("Character is alphabet-%c",ch);
    }else
    {
        printf("Not alphabet-");
    }
    return 0;
}
