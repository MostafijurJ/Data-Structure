#include<bits/stdc++.h>
using namespace std;
#define M 255500

bool a[M];

bool check(int n)
{
    if(a[n]==false)
    {
        a[n]=true;
        return true;
    }
    return false;
}

int valid(int n,int x)
{
    int i=x;
    int j=x;
    while(1)
    {
        i++;
        j--;

        if(i<=n)
        {
            if(check(i))
            {
                return i;
            }
        }
        if(j>=1)
        {
            if(check(j))
            {
                return j;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int v[M];
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        if(v[i]!=0)
        {
            a[v[i]]=true;
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(v[i]==0)
        {
            cout<<valid(n,i)<<" ";
            //s.pop();
        }
        else
        {
            cout<<v[i]<<" ";
        }
    }

    cout<<endl;

    return 0;
}
