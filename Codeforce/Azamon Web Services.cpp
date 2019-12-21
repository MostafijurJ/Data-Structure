#include<bits/stdc++.h>
using namespace std;

bool valid(string s1,string s2,int n,char c)
{
    int sz=s1.size();
    int pos=0;

    for(int i=sz-1; i>=0; i--)
    {
        if(s1[i]==c)
        {
            pos=i;
            break;
        }
    }

    char tmp=s1[n];
    s1[n]=s1[pos];
    s1[pos]=tmp;
    if(s1<s2)
    {
        cout<<s1<<endl;
        return true;
    }
    return false;
}

void check(string s1,string s2,string tmp)
{
    int sz=s1.size();

    if(s1==tmp)
    {
        cout<<"---"<<endl;
        return;
    }

    for(int i=0; i<sz; i++)
    {
        if(s1[i]>tmp[i])
        {
            if(valid(s1,s2,i,tmp[i]))
            {
                return;
            }
            else{
                cout<<"---"<<endl;
                return;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    int k=1;
    while(t--)
    {
        string s1,s2,tmp;
        cin>>s1>>s2;

        if(s1<s2)
        {
            cout<<s1<<endl;
        }
        else
        {
            tmp=s1;
            sort(tmp.begin(),tmp.end());
            check(s1,s2,tmp);
        }

    }
    return 0;
}
