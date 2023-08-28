#include<stdio.h>

void displayArray(int *p){
    for(int i=0;i<5;i++){
        printf(" %d ",*(p+i));
    }
    printf("\n");
      for(int i=0;i<5;i++){
        printf(" %d ",p[i]);
    }
       printf("\n");

    for(int i=0;i<5;i++){
        printf(" %d ",*p);
        p=p+1;  //p++
    }
}

int main()
{
    int arr[]={11,22,33,44,55};

displayArray(arr);

}

