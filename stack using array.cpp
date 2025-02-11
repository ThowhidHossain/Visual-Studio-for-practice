#include<iostream>
#include<stdlib.h>

using namespace std;

struct Stack
{
    int top;
    int stack_size;
    int * items;
};

Stack * createStack(int capacity)
{
    Stack * pt = new Stack();
	pt->stack_size = capacity;
	pt->top = -1;
	pt->items = new int (capacity);
	return pt;
}

int isEmpty(Stack * pt)
{
    if(pt->top == -1)
        return 1;
    return 0;
}
int isFull(Stack *pt)
{
    if(pt->top ==(pt->stack_size-1))
    {
        return 1;
    }
    return 0;

}


void push(Stack * pt, int data)
{
    if(isFull(pt))
    {
        cout<<"Stack is Full"<<endl;
        return;
    }

    pt->top++;
    pt->items[pt->top] = data;
    cout<<"Pushed to stack"<<endl;
    return;
}

void pop(Stack * pt)
{

    if(isEmpty(pt))
    {
        cout<<"Stack is empty"<<endl;

    }
    else
    {
        cout<<"popping.."<<endl;
        pt->top--;
    }
}

int peek(Stack * pt)
{
    if(isEmpty(pt))
    {
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
    //int data;
    //data=pt->items[pt->top];
    return pt->items[pt->top];
}

int main()
{
    Stack *mystack=createStack(2);
    Stack *mystack1=createStack(3);
    Stack *mystack2=createStack(3);
    push(mystack,5);
    push(mystack,6);
    push(mystack,7);
    pop(mystack);
    push(mystack1,7);
    cout<<peek(mystack)<<endl;
    push(mystack,peek(mystack1));
    //push(mystack,7);
    cout<<peek(mystack)<<endl;
    cout<<peek(mystack1)<<endl;
    push(mystack1,6);
    push(mystack1,4);
    pop(mystack);

    while(!isEmpty(mystack1))
    {
        int t=peek(mystack1);
        if(t==7)
        {
            push(mystack,t);
        }
        pop(mystack1);
        push(mystack2,t);

    }
    while(!isEmpty(mystack2))
    {
        int t=peek(mystack2);
        pop(mystack2);
        push(mystack1,t);

    }

    cout<<peek(mystack)<<endl;
    cout<<peek(mystack1)<<endl;



}
