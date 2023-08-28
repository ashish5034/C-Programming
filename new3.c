//By Using Function


#include<stdio.h>

void displayString(char s[]){
    int i;
   for(i=0;s[i]!='\0';i++)
        printf("%c",s[i]);
puts(s);
}

int countLength(char s[]){
     int i;int cnt=0;
    for(i=0;s[i]!='\0';i++)
        cnt++;

 return cnt;
}
int main()
{
    char arr[100];
    printf("Enter String \n");
    gets(arr);//scanf("%s",arr);

    displayString(arr);

    int len=countLength(arr);
    printf("Legth Of String %d ",len);

}

