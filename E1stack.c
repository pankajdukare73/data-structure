/*
                            Stack 
    1>stack is linear data structure.
    2>follows the principle of LIFO.means last inserted element deleted first.
    3>insertion and deletion work on only one end called top.
    3>Basic opertion:
        1>PUSH:it is used insert element before insertion check stack is full or not
        2>POP:it is used delete element before deletion check stack is empty or not
        3>IsEmpty:check stack is empty or not
        4>IsFull:check the stack is full or not
        5>peek:return the top element
*/
#include <stdio.h>
//check the stack is empty or not
int Isempty(int top)
{
    if(top==-1)
    {
        printf("Stack is Empty.");
        return 1;
    }
    return 0;
}
//check the stack is full or not
int Isfull(int top,int n)
{
    if(top==n-1)
    {
        printf("Stack is Full.");
        return 1;
    }
    return 0;
}
//traversal the stack element
void traverse(int stack[],int top)
{
    if(Isempty(top))
    {
        printf("So you cannot traversal the stack element!!!!!!!!!!!!\n");
    }
    else
    {
        printf("the stack element are:");
        for(int i=0;i<=top;i++)
        {
           printf("%d ",stack[i]);
        }
    }
}
//insert elemnent in stack
int insertelement(int stack[],int top,int n)
{
    if(Isfull(top,n))
    {
        printf("So you cannot insert element in stack.!!!!!!!!!!!!\n");
    }
    else
    {
        int newelement;
        printf("Enter Element you Want Insert in Stack:");
        scanf("%d",&newelement);
        top+=1;
        stack[top]=newelement;
        printf("The Element %d is sucessfully Insert in Stack.\n",newelement);
    }
    return top;
}
//delete element from stack
int deletelement(int stack[],int top)
{
    if(Isempty(top))
    {
        printf("So you cannot delete element from stack.!!!!!!!!!!!!\n"); 
    }
    else
    {
         printf("The Element %d is sucessfully deleted from Stack.\n",stack[top]);
         top--;
    }
    return top;
}
void main()
{
    int n, choice;
    printf("Enter the size of stack you want to create:");
    scanf("%d", &n);
    int stack[n]; //create empty stack
    int top = -1; //initialize top
    while (choice != 0)
    {
        printf("\nEnter your choice:\n1.Traverse.\n2.Insert.\n3.Delete.\n0.Exit.\nChoice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            traverse(stack,top);
            break;
        case 2:
            top=insertelement(stack,top,n);
            break;
        case 3:
            top=deletelement(stack,top);
            break;
        case 0:

            break;

        default:
            break;
        }
    }
}