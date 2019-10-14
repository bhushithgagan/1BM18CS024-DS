#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;    
};

typedef struct node* NODE;

void insert (int n,NODE head)
{
    NODE p,newn,temp;
    int ele,i;
    head = (NODE)malloc(sizeof(struct node));
    if(head == NULL) 
    {
        printf("Memory allocation failed!\n");
        exit(0);
    }
     else
    {
        printf("Enter the 1st node element:\n");
        scanf("%d",&ele);
        head->data = ele;
        head->next = NULL;
        
        p = head;
        newn = (NODE)malloc(sizeof(struct node));
        if(newn==NULL)
        {
            printf("Memory allocation failed!\n");
            exit(0);
        }
        else
        {
            for(i=2;i<=n;i++)
            {
                printf("Enter the %d element :",i);
                scanf("%d",&ele);
                newn->data = ele;
                newn->next = NULL;
                temp->next = newn;
                temp = temp->next;
            }
        }
    }    
}

NODE sort (NODE head)
{
    NODE p=head,q=NULL:
    if(head==NULL)
    {
        return;
    }
    while(p->next!=NULL)
    {
        q = p->next;
        while(q!=NULL)
        {
            q->next = p->next;
            if(p->data>q->data)
            {
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
            q = q->next;
        }
    p = p->next;
    }

}

int main()
{
    NODE head = NULL;
    int ch,n;
    printf("Enter the number of node to be inserted :\n");
    scanf("%d",&n);
    insert(n,head);
    do 
    {
        printf("*** DO YOU WANT TO SORT THE LIST?\n ENTER 
        1 FOR YES 0 FOR NO ***\n");
        scanf("%d",&ch);
        if(ch==1)
        sort(head);
    }while(ch!=0);
return 1;
}