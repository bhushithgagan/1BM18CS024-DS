#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};

typedef struct node* NODE;

NODE getnode() 
{
    NODE p = (NODE)malloc(sizeof(struct node));
    if(p!=NULL)
    return p;
    else
    printf("Memory allocation failed!\n");
    exit(0);
}

NODE insertfront(NODE head,int item)
{   NODE newn;
    NODE p = getnode();
    p->data=item;
    head = p;
    if(head==NULL)
    {
    head->next=p;
    p->next=NULL;
    }
    p=head;
    while(p!=NULL)
    {
        newn = getnode();
        newn->data = item;
        newn->next = p;
    }
    head = newn;
}

NODE display(NODE head)
{   NODE p;
    if(head==NULL)
    {
        printf("LIST IS EMPTY!\n");
        exit(0);
    }
    p=head;
    printf("LIST CONTENTS ARE:\n");
    while (p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
    
}
int main ()
{
int item,c;
NODE head =  NULL;
do{
printf("Enter the element to be inserted at front:\n");
scanf("%d",&item);
head = insertfront(head,item);
display(head);
printf("1 for cont 0 for no:\n");
scanf("%d",&c);
}while(c!=0);
}

