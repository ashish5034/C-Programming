#include<stdio.h>
int main()
{

    int arr[3][3];

    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){
            printf("Enter \n");
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

            printf("  %d  ",arr[i][j]);
        }
        printf("\n");
    }
}

