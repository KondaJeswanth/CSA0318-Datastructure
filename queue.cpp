#include<stdio.h>
#include<stdlib.h>
#define size 5
void enqueue();
void dequeue();
void show();
int inp_a[size];
int rear=-1;
int front=-1;
main()
{
    int ch;
    while(1)
    {
        printf("1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.show\n");
        printf("4.exit\n");
        printf("enter choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            default:
            printf("invalid choice");
        }
    }
}
void enqueue()
{
    int insert_item;
    if(rear==size-1)
    {
        printf("over flow\n");
    }
    else
    {
        front=0;
        printf("enter inserted element:\n");
        scanf("%d",&insert_item);
        rear=rear+1;
        inp_a[rear]=insert_item;
    }
}
void dequeue()
{
    if(front==1||front>rear)
    {
        printf("under flow");
    }
    else
    {
        printf("deleted element is %d\n",inp_a[front]);
        front=front+1;
    }
}
void show()
{
    if(front==-1)
    {
        printf("is empty");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d",inp_a[i]);
            printf("\n");
        }
    }
}
