//print negative element in array
#include<stdio.h>
void getNeg(int a[])
{
  printf("Negative number=\n");
 // int m=0;
  //while(m<5)
  for(int m=0;m<5;m++)
  {
      if(a[m]<0)
        printf("Negative no=%d\n",a[m]);
//m++;
  }
}
int main()
{
    int arr[5];
    //int n=0;
    //while(n<5)
    for(int n=0;n<5;n++)
    {
        printf("Enter array %d value",n);
        scanf("%d",&arr[n]);
        //n++;
    }
getNeg(arr);
}
