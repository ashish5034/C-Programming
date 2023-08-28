//Write a C program to concatenate two strings.
#include<stdio.h>
#include<string.h>
//void concateString(char s1[];char s2[])


int main()
{
    int i;
    int j=0;
    int len;
    char str1[100],str2[100];
    printf("Enter string 1\n");
    gets(str1);
    printf("Enter string 2\n");
    gets(str2);
    //scanf("%s%s",&str1,&str2);
    //puts(str1);
    //puts(str2);
    //printf("%s\t%s",str1,str2);
    //concateString(str1,str2);
    for(i=0;str1[i]!='\0';i++)
    str1[i]=' ';
    i++;
    for(j=0;str2[j]!='\0';j++,i++)
    {
        str1[i]=str2[j];
    }
    str1[i]='\0';
   // printf("%s%s\n",str1,str2);
    puts(str1);
    puts(str2);
}

