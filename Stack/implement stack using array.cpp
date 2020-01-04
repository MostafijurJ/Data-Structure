#include<bits/stdc++.h>
using namespace std;

int a[10];
int l1=-1;

void push(int x)
{
    if(l1==9)
    {
        cout<<"Overflow"<<endl;
        return;
    }

    a[++l1]=x;
}

void pop()
{
    if(l1==-1)
    {
        cout<<"Underflow"<<endl;
        return;
    }
    a[l1--]=0;
}

void top()
{
    if(l1==-1)
    {
        cout<<"NULL"<<endl;
        return;
    }
    cout<<a[l1]<<endl;
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
