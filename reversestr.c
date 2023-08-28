//reverse string
#include<stdio.h>
int main()
{
    char s[100],rev[100];
    printf("Enter string-");
    gets(s);
    puts(s);
    printf("################");
    printf("\n%s",strrev(s));
if(strcmp(s,strrev(s))==0)
{
    printf("\n palindrome");
}
else
    {
    printf("\n Not palindrome");
}
}
