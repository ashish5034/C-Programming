//print all char from a to z in reverse using for
#include<stdio.h>
int main()
{
    char ch,i;
    //printf("ENTER CHAR");
    //scanf("%c",&ch);
    for(i='z';i>='a';i--)
    {
        printf("%c\t",i);
    }
    return 0;
}
