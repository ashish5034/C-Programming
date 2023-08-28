//Write a C program to compare two strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    int i;
    printf("Enter string 1=");
    gets(str1);
    printf("Enter string 2=");
    gets(str2);
    for(i=0;str1[i]==str2[i]&&str1[i]!='\0';i++)
       if(str1[i]=str2[i])
        {
            printf("string are same");
        }
        else
            {
            printf("Not same");
        }
return 0;
}
