#define n 5
#include<stdio.h>
void push(int ele,int *t,int s[])
{
    if(*t==n-1)
    {
        printf("Stack is full\n");
        return;
    }
    {
    *t = *t + 1;
    s[*t]=ele;
    }
}  

int pop (int s[],int *t)
{
    int ele;
    if(*t==-1)
    {
        printf("Stack empty\n");
        return -999;
    }
    
    ele = s[*t];
    *t = *t - 1;
    return ele;
}  
int disp(int t,int s[])
{
int i;
if(t==-1)
{
    printf("Stack empty\n");
    
}
for(i=t;i>=0;i--)
{
    printf("%d\n",s[i]);
}
}

int main()
{
    int t=-1,s[n],c,c1,ele;
    do{
        printf("*** Enter your choice ***\n");
        printf("1 for Push\n2 for Pop\n3 for Display\n");
        scanf("%d",&c);
        switch (c)
        {
        case 1: printf("Enter the element to push\n");
                scanf("%d",&ele);
                push(ele,&t,s);
                break;
        case 2: pop(s,&t);
                break;
        case 3: disp(t,s);  
                break;     
        default: printf("\n*** INVALID ENTRY ***");
            
        }
    printf("\n*** Do your want to continue? ***");
    printf("\nEnter 1 for YES or 0 for NO\n");
    scanf("%d",&c1);    
    }while(c1!=0);
return 0;
}