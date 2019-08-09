#include<stdio.h>
struct stud{
        int id;
        int age;
        int marks;
       }s[10];
 
 int validate(struct stud s)
 { 
    if(s.age>=20 && s.marks>0 && s.marks<=100)
    return 1;
    else 
    return 0;
    
 }
 int qual(struct stud s)
 { 
     if(s.marks>=65)
     return 1;
     else 
     return 0;
    
 }
int main()
{
   int val,i,n;
   printf("Enter the number of students\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    printf("Enter the student details - id, age and marks\n");
    scanf("%d %d %d",&s[i].id,&s[i].age,&s[i].marks);
   
   if(validate(s[i]))
    {
       if(qual(s[i]))
       
           printf("Eligible\n");
       
       else 
           printf("INELIGIBLE\n");
   
    }
   else
       printf("Invalid Entry\n");
   }
  return 0;
}

