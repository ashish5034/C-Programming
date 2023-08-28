//Write a C program to convert lowercase string to uppercase.
//    Write a C program to convert uppercase string to lowercase.
#include<stdio.h>
#include<stdio.h>
int main()
{
    char s[100];
    int i;
    printf("Enter string");
    gets(s);
    for(i=0;s[i]!=0;i++)
    {
        if(s[i]>=97&&s[i]<=122)
            s[i]=s[i]-32;
            else
                if(s[i]>=65&&s[i]<=97)
                s[i]=s[i]+32;
    }
    printf("uppercase string:-%s",s);
    return 0;
}
