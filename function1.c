#include<stdio.h>
int disArray(int arr[])
{
    for(int i=0;i<5;i++)
     {
        printf("%d\n",arr[i]);
}
}
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
    for(i=0;i<5;i++)
    {
        printf("ENTER");
        scanf("%d",&home[i]);
    }
    disArray(home);
   int res=sumofArray(home);
   printf("Result=%d",res);

}

