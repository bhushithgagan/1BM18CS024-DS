#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node* Node;

//to Push the elements
Node push(int ele, Node top)
{
    if (top == NULL)
    {
        top =(Node)malloc(sizeof(struct node));
        top->data = ele;
        top->next = NULL;
	    return top;
    }
    else
    {
        Node temp =(Node)malloc(sizeof(struct node));
        temp->data = ele;
        temp->next = top;
        top = temp;
	    return top;
    }
}

//Pop elements
Node pop(Node top)
{
    Node t = top;

    if (t == NULL)
    {
        printf("\nStack underflow\n");
        return top;
    }
    else
    t = t->next;
    printf("\n Popped element : %d\n", top->data);
    free(top);
    top = t;
    return top;
}
//Display
void display(Node top)
{
    Node t = top;

    if (t == NULL)
    {
        printf("Stack is empty");
        return;
    }
    printf(" Elements in the stack are:\n");
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
 }

int main()
{
	int ele, ch,c1;
	Node top = NULL;
	do 
	{
		printf("\n *** Enter your choice *** \n");
		printf("1 to Push\n2 to pop\n3 for display\n");
		scanf("%d", &ch);

		switch (ch)
		{
			case 1:printf(" Enter data element: \n");
			       scanf("%d", &ele);
			       top = push(ele, top);
			       break;
			case 2:top = pop(top);
			       break;
			case 3:display(top);
			       break;
			
			default :printf("INVALID ENTRY!\n");
				 break;
		}
	printf("\nDo you want to continue? 1 for YES 0 for NO\n");
	scanf("%d",&c1);
}while(c1!=0);	
}




