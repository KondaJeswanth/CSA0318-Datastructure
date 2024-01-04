#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head,*newnode;
int val;
void addFirst(struct node **head)
{
      newnode=(struct node*)malloc(sizeof(struct node*));
      printf("\n enter the element:");
      scanf("%d",&val);
      newnode->data = val;
      newnode->next = *head;
      *head = newnode;
}
void insertatrandom(struct node **head)
{
	int position,value;
	printf("\nenter the position and value");
	scanf("%d%d",&position,&value);
	int cnt=1;
	struct node *p=*head;
	while(p!=NULL)
	{
		if(cnt==position)
		break;
		p=p->next;
		cnt++;
	}
	if(p==NULL){
	printf("invalid position");
    }
    else
    {
    	struct node *temp=(struct node*)malloc(sizeof(struct node*));
    	temp->data=value;
    	temp->next=p->next;
    	p->next=temp;
    	printf("\nvalue is inserted at specific poition");
	}
}
void insertend(struct node **head)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node*));
	int value;
	printf("\nenter the elements");
	scanf("%d",&value);
	temp->data=value;
	temp->next=NULL;
	struct node *p=*head;
	if(p==NULL)
	{
		*head=temp;
	}
	else
	{
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=temp;
    }
}
void print(struct node **head)
{
	struct node *p=*head;
	printf("Element:");
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
int main()
{
	struct node *head=NULL;
	while(1)
	{
		int ch;
		printf("\n1.addfirst\n2.insertatrandom\n3.insertatend\n4.print\n5.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			   addFirst(&head);
			   break;
			case 2:
				insertatrandom(&head);
				break;
			case 3:
				insertend(&head);
				break;
			case 4:
				print(&head);
				break;
			case 5:
				exit(1);
		}
	}
}
