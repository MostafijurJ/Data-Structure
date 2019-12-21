#include<bits/stdc++.h>
using namespace std;

int a[10];

void init()
{
    for(int i=0; i<10; i++)
    {
        a[i]=0;
    }
}

bool check(string s)
{
    init();

    int sum=0;
    int sz=s.size();
    for(int i=0; i<sz; i++)
    {
        a[s[i]-'0']++;
        sum+=(s[i]-'0');
    }

    if(sum%3!=0)
    {
        return false;
    }

    if(a[0]>=2 || (a[0]>0 && (a[2]>0 || a[4]>0 || a[6]>0 || a[8]>0)))
    {
        return true;
    }

    return false;
}

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        if(check(s))
        {
            cout<<"red"<<endl;
        }
        else
        {
            cout<<"cyan"<<endl;
        }
    }

    return 0;
}
