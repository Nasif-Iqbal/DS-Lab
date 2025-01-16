#include<bits/stdc++.h>
using namespace std;

int sz = 5;
int a[100];
int Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int Front = 0;
int Rear = 0;

void Insert(int val)
{
    if(Rear+1==Front) cout << "overflow\n";   ///***
    else if(Rear==sz and Front==1) cout << "overflow..\n"; ///***
    else if(Rear==sz)
    {
        Rear = 1;
        a[Rear] = val;
    }
    else
    {
        if(Rear==0) ///***
        {
            Rear = 1;
            Front = 1;
        }
        else Rear++;
        a[Rear] = val;
    }
}

void Pop()
{
    if(Front==0 and Rear==0) cout << "underflow\n";   ///***
    else
    {
        if(Front==Rear)   ///***
        {
            Front= 0;
            Rear = 0;
        }
        else
        {
            if(Front==sz) Front = 1;   ///***
            else Front++;
        }
    }
}

int top()
{
    if(Rear==0) return -1;   ///***(empty array)
    else return a[Front];
}

int main()
{
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    Insert(6);

    cout << top() << endl;
    Pop();
    cout << top() << endl;
    Pop();
    cout << top() << endl;
    Pop();
    cout << top() << endl;
    Pop();
    cout << top() << endl;
    Pop();
    cout << top() << endl;
    Pop();
    cout << top() << endl;
    Pop();
    Insert(100);
    cout << top() << endl;
}

/*
output:
overflow..
1
2
3
4
5
-1
underflow
-1
underflow
100

*/

/*
output:
*/
