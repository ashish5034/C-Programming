#include<stdio.h>
struct student{
    int roll_No;
    char name[100];
    char dept[100];
    char course[50];
    int yr_Join;
};

void displayStudent(struct student arr[]){

for(int i=0;i<3;i++){
        printf("*****************\n");
    printf("ROLL NO  %d   ",arr[i].roll_No);
    puts(arr[i].name);
    printf("  ");
    puts(arr[i].dept); printf("  ");
    puts(arr[i].course);printf("  ");
    printf("Year OF Join  %d  \n",arr[i].yr_Join);
}
}

void displayStudentYearWise(struct student arr[],int year){

for(int i=0;i<3;i++){
        if(arr[i].yr_Join==year){
        printf("*****************\n");
    printf("ROLL NO  %d \n",arr[i].roll_No);
    puts(arr[i].name);
    printf("\n");
    puts(arr[i].dept); printf("\n");
    puts(arr[i].course);printf("\n");
    printf("Year OF Join  %d \n",arr[i].yr_Join);
        }
}
}
main()
{

struct student arr[3];

for(int i=0;i<3;i++){
printf("Enter ROLL No \n");
scanf("%d",&arr[i].roll_No);
printf("Name \n");
fflush(stdin);
gets(arr[i].name);
printf("Dept \n");
fflush(stdin);
gets(arr[i].dept);
printf("Course \n");
fflush(stdin);
gets(arr[i].course);
printf("Enter YR OF JOIN  \n");
scanf("%d",&arr[i].yr_Join);
}

displayStudent(arr);
int yr;
printf("In Which Year Student want to See \n");
scanf("%d",&yr);
displayStudentYearWise(arr,yr);

}
