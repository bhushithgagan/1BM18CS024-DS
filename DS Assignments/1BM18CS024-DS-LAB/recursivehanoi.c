#include<stdio.h>
void towhan(int n,char src,char temp,char dest)
{
if(n==1)
{
printf("Move disc %d from %c to %c \n",n,src,dest);
return;
}
towhan(n-1,src,dest,temp);
printf("Move disc %d from %c to %c \n",n,src,dest);
towhan(n-1,temp,src,dest);
}
void main()
{
int n,t;  //include x here if making the program user interactive
char src='a',temp='c',dest='b';  //src,temp and dest are the towers used of which src is source and dest is destnation tower resp
//do
//{
printf("Enter the number of discs\n");
scanf("%d",&n);
//printf("Enter the source tower and destination tower\n");
//scanf("%c %c",&src,&dest); 
towhan(n,src,temp,dest);
printf("Discs moved from source to destination!\n");
/*printf("Do you want to continue?    1  for yes  0 for no\n");
scanf("%d",&x);
}while(x!=0);                 OPTIONAL STEPS TO MAKE IT USER INTERACTIVE ONLY!
printf("Thank You!\n"); */  
}