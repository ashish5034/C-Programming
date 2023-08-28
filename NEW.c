#include<stdio.h>
int main()
{
     char name[20]={'A','P','P','L','E','\0'};

     int i=0;
     while(name[i] != '\0'){
        printf(" %c ",name[i]);
        i++;
     }
     printf("\n-----------------------\n");

     int j;
     for(j=0; name[j]!='\0';j++)
        printf(" %c ",name[j]);

}

