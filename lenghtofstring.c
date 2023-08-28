//Write a C program to find length of a string.
#include<stdio.h>
int countlen(char s[])
{
  int i;
  int count=0;
  for(i=0;s[i]!='\0';i++)
        count++;
        return count;
}
int main()
{
    char str[100];
    printf("Enter character String =");
    gets(str);//scanf("%s",&str);
    int cnt=countlen(str);
   printf("length of string is %d",cnt);

}
