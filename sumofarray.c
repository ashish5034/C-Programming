#include<stdio.h>
int sumofArray(int arr[])
            {
                int sum=0;
                for(int i=0;i<5;i++)
                {
                    sum=sum+arr[i];
                }
                return sum;


}
int main()
{
    int home[5];
    int i;
    printf("Enter no:=\n");
    for(i=0;i<5;i++)
    {
        //printf("Enter no:=");
        scanf("%d",&home[i]);
    }
    int res=sumofArray(home);
    printf("sum of array=%d\n",res);
}
