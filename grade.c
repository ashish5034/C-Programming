//calculate percentage  and grade -
#include<stdio.h>
int main()
{
    int phy,chem,bio,math,marks,per;
    printf("Enter marks of sub:");
    scanf("%d%d%d%d",&phy,&chem,&bio,&math);
    marks=phy+chem+bio+math;
    printf("MARKS=%d",marks);
    per=marks/4;
    printf("PERCENTAGE=%d\n",per);
    if(per>=90)
    {
        printf("GRADE A");
    }
    else if(per>80)

    {
        printf("GRADE B");
    } else if(per>70)
    {
        printf("GRADE C");
    }

    return 0;
}

