#include<stdio.h>
int queue[10];
int i,j,choice,front=-1,rear=-1,n,x;
void enqueue(int x);
void dequeue();
void display();
int main()
{
    puts("Enter the size of queue : \n");
    scanf("%d",&n);
    puts("Initialising Queue\n");
    
    while(choice!=4)
    {
        puts("CHOSE ONE OF THE FOLLOWING : ");
        puts("1. Enqueue ");
        puts("2. Dequeue ");
        puts("3. Display ");
        puts("4. Exit ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue(x);
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: break;
        };
    }
}
void enqueue(int x)
{
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        puts("enter value :\n ");
        scanf("%d",&x);
        queue[rear]=x;
    }
    else if(rear==n-1)
    {
        puts("Queue overflow\n");
    }
    else
    {
        rear = rear+1;
        puts("enter value :\n ");
        scanf("%d",&x);
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1){
        puts("Queue Underflow");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else{
        front++;
    }
}
void display()
{
    for(i=front;i<rear+1;i++)
    {
        printf("%d\n",queue[i]);
    }
}
