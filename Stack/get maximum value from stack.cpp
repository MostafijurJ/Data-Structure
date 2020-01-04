#include<bits/stdc++.h>
using namespace std;

stack<int>s;
int mx=0;

void push(int x)
{
    if(s.empty())
    {
        s.push(x);
        mx=x;
        return;
    }

    if(x>mx)
    {
        s.push(2*x-mx);
        mx=x;
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

    if(t>mx)
    {
        mx=2*mx-t;
    }
}

void top()
{
    if(s.empty())
    {
        cout<<"NULL"<<endl;
        return;
    }
    cout<<mx<<endl;
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
