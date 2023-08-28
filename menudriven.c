/* A menu driven program */
#include<stdio.h>
int main( )
{
 int choice,x;
 //while ( 1 )
 {
     printf("\n Which operation do u want to perform");
 printf ( "\n1 Factorial" ) ;
 printf ( "\n2 Prime    " ) ;
 printf ( "\n3 Odd/Even " ) ;
 printf ( "\n4 leapYear ");
 printf ( "\n5 print Char" ) ;
 printf ( "\n6 Exit     " ) ;
 do{
 printf ( "\nYour choice- " ) ;
 scanf ( "%d", &choice ) ;
 switch ( choice )
 {
 case 1 :
{
 int i,fact=1,number;
 printf("Enter a number: ");
  scanf("%d",&number);
    for(i=1;i<=number;i++)
        {
      fact=fact*i;
        }
  printf("Factorial of %d is: %d",number,fact);
 break ;
 case 2 :
 /* logic for deciding prime number */
 {
int n,i,m=0,flag=0;
printf("Enter the number to check prime:");
scanf("%d",&n);
m=n/2;
for(i=2;i<=m;i++)
    {
if(n%i==0)
    {
printf("Number is not prime");
flag=1;
break;
}
}
if(flag==0)
printf("Number is prime");
 }
 break ;

 case 3 :
{
      //logic for even odd no
 int no;
 printf("Enter No -");
 scanf("%d",&no);
 if(no%2==0)
 printf("Number is even=%d",no);
 else
    printf("Number id Odd %d",no);
}
break;
case 4:{
int y;
printf("Enter year No");
scanf("%d",&y);
  if(y%4==0||y%400==0&&y%100==0)
        printf("LEAP YEAR");
  else
    printf("NOT LEAP YEAR");
}
break;
case 5:
{
       int i;
{
for(int i=65;i<=90;i++)
    {
        printf("%c\t",i);
    }
    printf("\n");

    for(int i=97;i<=122;i++)
    {
        printf("%c\t",i);
    }
}
}
 case 6 :
 exit(0) ;
}

}
printf("\nDO U WANT TO CONTINUE PRESS 1");
    scanf("%d",&x);
 }
while(x==1);
    return 0;
}
 }

