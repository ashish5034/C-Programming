//void *  // Generic Pointer
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Size \n");
    scanf("%d",&n);

    int *p=(int *)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
        {
        printf("Enter \n");
        scanf("%d",&p[i]);
    }
     for(int i=0;i<n;i++)
     {
        printf(" %d ",p[i]);
    }

    free(p);
}

