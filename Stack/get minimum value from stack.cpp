#include<bits/stdc++.h>
using namespace std;

stack<int>s;
int mn=0;

void push(int x)
{
    if(s.empty())
    {
        s.push(x);
        mn=x;
        return;
    }

    if(x<mn)
    {
        s.push(2*x-mn);
        mn=x;
    }
    else
    {
        s.push(x);
    }
}

void pop()
{
    if(s.empty())
    {
        cout<<"Underflow"<<endl;
        return;
    }

    int t=s.top();
    s.pop();

    if(t<mn)
    {
        mn=2*mn-t;
    }
}

void top()
{
    if(s.empty())
    {
        cout<<"NULL"<<endl;
        return;
    }
    cout<<mn<<endl;
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
