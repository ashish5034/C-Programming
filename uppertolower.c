//Write a C program to convert lowercase string to uppercase.
//    Write a C program to convert uppercase string to lowercase.
#include<stdio.h>
int main()
{
    int i;
char s1[100];
char s2[100]={0};
printf("Enter to convert upper to lower and vice versa=");
gets(s1);
for(i=0;i<strlen(s1);i++)
{
    if(s1[i]>='a'&& s1[i]<='z')
    {
        s2[i]=(char)s1[i]-32;
    }
    else if(s1[i]>='A'&&s2[i]<='Z')
    {
        s2[i]=(char)s1[i]+32;
    }
    else
    {
        s1[i]=s2[i];
    }
}
printf("The converted sentence is %s\n",s2);
}
