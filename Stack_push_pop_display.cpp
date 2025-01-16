#include<bits/stdc++.h>
using namespace std;

#define size 5
int Stack[size];
int top=-1;

void push(int item)
{
    if(top==size-1)
        cout<<"Overflow and Exit"<<endl;
    else
    {
        top++;
        Stack[top]=item;
        cout<<"Item inserted "<<item<<endl;
    }
}

void pop()
{
    if(top==-1)
        cout<<"Underflow and Exit "<<endl;
    else
    {
        int item=Stack[top];
        top--;
        cout<<"Item deleted "<<item<<endl;

    }
}

void display()
{
    if(top==-1)
        cout<<"The stack is empty"<<endl;
    else
    {
        cout<<"Stack elements : ";
        for(int i=0; i<=top; i++)
        {
            cout<<Stack[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int choice, item;

    cout<<"1.push"<<endl
        <<"2.pop"<<endl
        <<"3.Display"<<endl
        <<"4.Exit"<<endl;
    while(1)
    {
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter your value to push :";
            cin>>item;
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            cout<<"Invalid choice"<<endl;

        }
    }

    return 0;
}

