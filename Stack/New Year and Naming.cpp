#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<string>v1,v2;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        v1.push_back(s);
    }
    for(int i=0; i<m; i++)
    {
        string s;
        cin>>s;
        v2.push_back(s);
    }

    int q;
    cin>>q;
    while(q--)
    {
        string s="";
        int y;
        cin>>y;

        if(y<=n)
        {
            s+=v1[y-1];
        }
        if(n<y)
        {
            if(y%n==0)
            {
                s+=v1[n-1];
            }
            else
            {
                s+=v1[(y%n)-1];
            }
        }
        if(y<=m)
        {
            s+=v2[y-1];
        }
        if(y>m)
        {
            if(y%m==0)
            {
                s+=v2[m-1];
            }
            else
            {
                s+=v2[(y%m)-1];
            }
        }

        cout<<s<<endl;
    }

    return 0;
}
