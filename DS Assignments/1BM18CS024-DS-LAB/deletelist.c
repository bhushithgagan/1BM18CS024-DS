#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;           
    struct node *next;  
} *head;

typedef struct node* NODE;
void insert(int n)   //for inserting given number of nodes initially 
{
    NODE newn,temp;
    int ele, i;

    head = (NODE)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Memory allocation failed! \n");
        exit(0);
    }
    else
    {
        
        printf("Enter the 1st node: ");
        scanf("%d", &ele);

        head->data = ele; 
        head->next = NULL; 

        temp = head;

        for(i=2; i<=n; i++)
        {
            newn = (NODE)malloc(sizeof(struct node));

            
            if(newn == NULL)
            {
                printf("Memory allocation failed \n");
                break;
            }
            else
            {
                printf("Enter the %d node data: ", i);
                scanf("%d", &ele);

                newn->data = ele; 
                newn->next = NULL; 
                temp->next = newn; 
                temp = temp->next;
            }
        }
    }
}

void deletefront()         //when user opts for deleting ele at front 
{
    NODE p;

    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        p = head;
        head = head->next;
        free(p);
    }
}

void display()       //when user opts for displaying the elements of the node
{
    NODE p;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        p = head;
        while(p != NULL)
        {
            printf("%d\n", p->data); 
            p = p->next;                 
        }
    }
}

void deleterear()   //when user opts to delete element at rear
{
    NODE p, q;
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        p = head;
        q = head;
        while(p->next != NULL)
        {
            q = p;
            p = p->next;
        }

        if(p == head)
        {
            head = NULL;
        }
        else
        {
            q->next = NULL;
        }
        free(p);
    }
}

void deletedata(int key) //when user provides an element to be deleted 
{
  NODE prev,cur;
    while (head != NULL && head->data == key)
    {
        prev = head;
        head = head->next;
        free(prev);
        return;
    }
    prev = NULL;
    cur  = head;
   while (cur != NULL)
    {
        
        if (cur->data == key)
        {
           
            if (prev != NULL) 
                prev->next = cur->next;
            free(cur);
            return;
        } 
        prev = cur;
        cur = cur->next;
       
    }
 if(cur == NULL)
   {
	printf("Element not found!\n");
	return;
   }
}

int main()
{
    int n, c,c1,key;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    insert(n);
do
{
    printf(" *** Enter Your Choice ***\n");
    printf("1 for deletion from front \n2 for deletion from Rear\n3 for deletion of a given data node\n4 for display\n");
    scanf("%d", &c);
    switch(c)
{
    case 1:  deletefront();
             break;
    case 2: deleterear();
             break;
    case 3: printf("Enter the element to be deleted:\n");
            scanf("%d",&key);
            deletedata(key);
             break;
    case 4: display();
             break;
    default: printf("INVALID ENTRY!\n");
}
printf("\nDo you want to continue?\n");
printf("Enter 1 for yes 0 for no\n");
scanf("%d",&c1);
}while(c1!=0);
return 0;
}




