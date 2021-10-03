#include<stdio.h>
//declaring global variables
int stack[100],n,top=-1,i,j,choice=0;
//declaring functions
void push();
void pop();
void show();
void main()
{
    //getting the no. of elements in stack
    puts("Enter the number of elements in the stack : ");
    scanf("%d",&n);

    //giving choices to the user
    //for array manipulation.
    while(choice!=4)
    {
    puts("CHOSE ONE OPTION");
    puts("1. PUSH");
    puts("2. Pop");
    puts("3. Show");
    puts("4. EXIT");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: show();
                break;
        default: break;
    };
    }
}
void push()
{
    int val;
    if(top==n-1)
    {
        puts("STACK OVERFLOW");
    }
    else
    {
        puts("Enter value : ");
        scanf("%d",&val);
        top+=1;
        stack[top]=val;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("sTACK Underflow");
    }
    else
    {   
        top-=1;
    }
}
void show()
{
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top==-1)
    {
        printf("Empty stack");
    }
}
