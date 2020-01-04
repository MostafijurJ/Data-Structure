#include<bits/stdc++.h>
using namespace std;

int a[10];
int l1=-1,l2=10;

void push1(int x)
{
    if(l2-l1<=1)
    {
        cout<<"Overflow"<<endl;
        return;
    }

    l1++;
    a[l1]=x;
}

void push2(int x)
{
    if(l2-l1<=1)
    {
        cout<<"Overflow"<<endl;
        return;
    }

    l2--;
    a[l2]=x;
}

void pop1()
{
    if(l1<0)
    {
        cout<<"underflow"<<endl;
        return;
    }

    a[l1]=0;
    l1--;
}

void pop2()
{
    if(l2>=10)
    {
        cout<<"underflow"<<endl;
        return;
    }

    a[l2]=0;
    l2++;
}

void top1()
{
    if(l1>=0)
    {
        cout<<"Top-1 : "<<a[l1]<<endl;
        return;
    }
    cout<<"NULL"<<endl;
}

void top2()
{
    if(l2<10)
    {
        cout<<"Top-1 : "<<a[l2]<<endl;
        return;
    }
    cout<<"NULL"<<endl;
}

void print()
{
    for(int i=0; i<10; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
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
            push1(x);
        }
        else if(n==2)
        {
            pop1();
        }
        else if(n==3)
        {
            top1();
        }
        else if(n==4)
        {
            int x;
            cin>>x;
            push2(x);
        }
        else if(n==5)
        {
            pop2();
        }
        else if(n==6)
        {
            top2();
        }
        else
        {
            print();
        }
    }
    return 0;
}
