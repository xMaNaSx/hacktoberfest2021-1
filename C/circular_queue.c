#include<stdio.h>
//defining globally the size of queue
//using hash define
#define n 5
//variable declaration
int choice,i,j,front=-1,rear=-1,queue[n];
//declaring the queue action functions.
void enqueue();
void dequeue();
void display();

int main()
{
    puts("CIRCULAR QUEUE OPERATION");
    puts("");
    for(int i=0;i<30;i++)
    {
        printf("-");
    }
    puts("");
    while(choice!=4)
    {
    puts("CHOSE ONE : ");
    puts("1. ENQUEUE");
    puts("2. DEQUEUE");
    puts("3. DISPLAY");
    puts("4. EXIT");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: enqueue();
                break;
        case 2: dequeue();
                break;
        case 3: display();
                break;
        case 4: break;
        default : puts("Invalid Input");
                  break;
    };
    }
    return 0;
}
void enqueue()
{
    int x;
    if(front==-1 & rear==-1)
    {
        puts("Enter Value : ");
        scanf("%d",&x);
        front=rear=0;
        queue[rear]=x;
    }
    else if(front==(rear+1)%n)
    {
        puts("QUEUE OVERFLOW");
    }
    else
    {
        puts("Enter Value : ");
        scanf("%d",&x);
        rear=(rear+1)%n;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==rear==-1)
    {
        puts("QUEUE UNDERFLOW");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%n;
    }
}
void display()
{

    for(i=front;i!=rear;i=(i+1)%n)
    {
        printf("%d",queue[i]);
    }
    printf("%d",queue[i]);

}