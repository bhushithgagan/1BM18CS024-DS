#include<stdio.h>
int fact (int n)
{
    if(n==0)
    return 1;
    return(n*fact(n-1));
}
void main()
{
    int f,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    f = fact(n);
    printf("Factorial = %d\n",f);
}