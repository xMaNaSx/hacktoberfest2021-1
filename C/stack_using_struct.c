#include<stdio.h>
struct stack
{
    int top;
    int stack[100];
}s;
void push();
void pop();
void display();

int choice,i,j,n,x;
int main()
{
    s.top=-1;
    puts("Enter the size of the stack : ");
    scanf("%d",&n);

    while(choice!=4)
    {
        puts("CHOSE ONE OF THE FOLLOWING : ");
        puts("1. PUSH ");
        puts("2. POP ");
        puts("3. Display ");
        puts("4. Exit ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: break;

            default: puts("Invalid Command");
                     break;
        };
    }
}
void push()
{
    if(s.top==n-1)
    {
        puts("Stack overflow");
    }
    else
    {
        s.top+=1;
        puts("Enter the value to be pushed : ");
        scanf("%d",&x);
        s.stack[s.top]=x;
    }
}
void pop()
{
    if(s.top==-1)
    {
        puts("Stack Underflow");
    }
    else
    {
        s.top-=1;
    }
}
void display()
{
    for(i=0;i<s.top+1;i++)
    {
        printf("%d\n",s.stack[i]);
    }
}