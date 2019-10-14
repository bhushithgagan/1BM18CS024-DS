#include<stdio.h>
struct stud 
{
    int marks;
    char name[10];
    int age;
};
int main()
{ 
    struct stud s; int n; 
    printf("Enter no. of students:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("*** Enter the Details *** \n");
    printf("Name , age and marks:\n");
    scanf("%s %d %d", s.name,&s.age, &s.marks);
    printf("Details: %s\n%d\n%d\n",s.name,s.age,s.marks);
    }
    return 0;
}