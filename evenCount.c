#include<stdio.h>
int evenCount(int b[]){
	int cnt=0;
	for(int i=0;i<5;i++){
	    if(b[i]%2==0)
	    cnt++;
	}

	return cnt;

}

int oddCount(int b[]){
	int cnt=0;
	for(int i=0;i<5;i++){
	    if(b[i]%2==1)
	    cnt++;
	}

	return cnt;

}


int main()
 {

// int arr[5]={11,22,33,44,55};
int arr[5];
int i;
for(i=0;i<5;i++)
{
    printf("Enter Number");
    scanf("%d",&arr[i]);
}
int x=evenCount(arr);
printf("EVEN COUNT=%d\n",x);
int y=oddCount(arr);
printf("ODD COUNT =%d",y);
 }

