#include<bits/stdc++.h>
using namespace std;

queue<int>q1,q2;

void push(int x)
{
    if(q1.empty())
    {
        q1.push(x);
        return;
    }

    q2.push(x);
    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }

    queue<int>tmp;
    tmp=q2;
    q2=q1;
    q1=tmp;
}

void pop()
{
    if(q1.empty())
    {
        cout<<"Underflow"<<endl;
        return;
    }
    q1.pop();
}

void top()
{
    if(q1.empty())
    {
        cout<<"NULL"<<endl;
        return;
    }
    cout<<q1.front()<<endl;
}

int main()
{
    int n;
    while(1)
    {
        cin>>n;

        if(n==1)
        {
            int x;
            cin>>x;
            push(x);
        }
        else if(n==2)
        {
            pop();
        }
        else
        {
            top();
        }
    }
    return 0;
}
