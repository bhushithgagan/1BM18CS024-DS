#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node *NODE;

NODE enqueue(NODE front, int ele)
{
    NODE p, q;
    p =(NODE)malloc(sizeof(struct node));
    p->data = ele;
    p->next=NULL;
    q = front;
    if(front == NULL)
     	return p;
    while(q->next != NULL)
	{
        q = q->next;
    }
    q->next = p ;
    return front;
}
NODE dequeue(NODE front)
{
	if(front == NULL){
		printf("Underflow!!\n");
		return front;
	}
	printf("Deleted element is: %d\n", front->data);
	front = front->next;
	return front;
}
void display(NODE front){
	NODE p;
	if(front == NULL){
		printf("Queue is empty!\n");
		return;
	}
	printf("Elements in Queue are: \n");
	p = front;
	printf("\n");
	while(p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}
int main(){
	NODE front = NULL;
	int ch,c1,ele;
	do{ 
		printf("*** ENTER YOUR CHOICE ***\n");
		printf("1 TO INSERT\n2 TO DELETE\n3 FOR DISPLAY\n");
		scanf("%d", &ch);
		switch(ch){
			case 1: printf("Enter element:\n");
					scanf("%d", &ele);
					front = enqueue(front, ele);
					break;
			case 2: front = dequeue(front);
					break;
			case 3: display(front);
					break;
		}
	printf("DO YOU WANT TO CONTINUE? 1 FOR YES 0 FOR NO\n");
	scanf("%d",&c1);
	}while(c1!=0);
	return 0;
}

