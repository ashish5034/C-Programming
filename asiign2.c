/*Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining
Assume that there are not more than 5 students in the
collage.
(a) Write a function to print names of all students who joined
in a particular year.
(b) Write a function to print the data of a student whose roll
number is given.*/
#include<stdio.h>
struct stud
{
    int roll,year_join;
    char name[20],dept[10],course[10];
};
void displayStud(struct stud p1[])
{
    for(int i;i<3;i++)
    {
        printf("******************************\n");
puts(p1[i].name);
printf("\n");
    puts(p1[i].dept);
printf("\n");
    puts(p1[i].course);
    printf("\n");
    printf("%d\n%d\n",p1[i].roll,p1[i].year_join);

    }
}
void displayStudyr(struct stud p1[],int yr)
{
    for(int i;i<3;i++)
    {
        if(p1[i].year_join==yr){
        printf("******************************\n");
puts(p1[i].name);
printf("\n");
    puts(p1[i].dept);
printf("\n");
    puts(p1[i].course);
    printf("\n");
    printf("%d\n%d\n",p1[i].roll,p1[i].year_join);
        }
    }
}
void displayStudroll(struct stud p1[],int rollcall)
{
    for(int i;i<3;i++)
    {
        if(p1[i].roll==rollcall){
        printf("******************************\n");
puts(p1[i].name);
printf("\n");
    puts(p1[i].dept);
printf("\n");
    puts(p1[i].course);
    printf("\n");
    printf("%d\n%d\n",p1[i].roll,p1[i].year_join);
        }
    }
}
int main()
{
    struct stud s1[3];
    for(int i=0;i<3;i++)
    {
       printf("Enter ROLL No \n");
scanf("%d",&s1[i].roll);
printf("Name \n");
fflush(stdin);
gets(s1[i].name);
printf("Dept \n");
fflush(stdin);
gets(s1[i].dept);
printf("Course \n");
fflush(stdin);
gets(s1[i].course);
printf("Enter YR OF JOIN  \n");
scanf("%d",&s1[i].year_join);
    }
    displayStud(s1);
    int yr;
    printf("In which year student want to see\n");
    scanf("%d",&yr);
displayStudyr(s1,yr);
int r;
printf("Enter roll no of student want to see\n");
scanf("%d",&r);
displayStudroll(s1,r);
}

