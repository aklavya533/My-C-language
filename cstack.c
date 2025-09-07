#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define max 50
int stack[max];
int top = -1;
void push(int);
int pop();
void peek();
int main()
{
    int Key,ch;
    while(1)
    {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Exit");
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter data:");
                   scanf("%d",&Key);
                   push(Key);
                   break;
            case 2:
            Key=pop();
                   break;
            case 3:
            peek();
                   break;
            case 4:
            exit(0);
        }
    }
}
void push(int Key)
{
    if(top==max-1)
        printf("\nSTACK IS OVERFLOW");
        else{
             top++;
            stack[top]=Key;
        }
    }
int pop()
{
    if(top==-1)
    {
        printf("\nSTACK IS UNDERFLOW");
        return -1; // Underflow: -1 returned as error indicator
    }
    else
    {
        int popped = stack[top];
        printf("\nPopeded element is %d", popped);
        top = top - 1;
        return popped;
    }
}
void peek()
{
}
