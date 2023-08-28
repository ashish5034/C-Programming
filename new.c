//MENU DRIVEN PROGRAM
#include<stdio.h>
int main()
{
    int n1,n2,res;
    char op;int x;
    do{
    printf("ENTER N1 and N2-");
    scanf("%d%d",&n1,&n2);

        printf("+\n - \n * \n / \n");
    printf("Enter Operator\n");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':res=n1+n2;
        printf("ADD is %d\n",res);
        break;
         case '-':res=n1-n2;
        printf("SUB is %d\n",res);
        break;
         case '*':res=n1*n2;
        printf("MUL is %d\n",res);
        break;
         case '/':res=n1/n2;
        printf("DIV is %d\n",res);
        break;
        default:printf("ENTER + - *  / only \n" );
        break;

    }
    printf("DO U WANT TO CONTINUE PRESS 1");
    scanf("%d",&x);
    }
while(x==1);

return 0;
}
