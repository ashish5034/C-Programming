//  Write a C program to copy one string to another string.
#include<stdio.h>
int main()
{
    char s1[100],s2[100],i;
    printf("ENTER STRING S1-");
    gets(s1);
    for(i=0;s1[i]!='\0';++i)
    {
        s2[i]=s1[i];
    }
   // s2[i]='\0';
    printf("String s2=%s",s2);
}
