#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b;
    cin>>n>>a>>b;
    if(a>b)
    {
        swap(a,b);
    }
    long long mn1=0,mn2=0,mn3=0;
    if(abs(a-b)%2==0)
    {
        mn1=abs(a-b)/2;
        cout<<mn1<<endl;
    }
    else
    {
        mn2=(a-1)+(b-1);
        mn3=(n-a)+(n-b);
        //cout<<mn2<<" "<<mn3<<endl;

        long long mn=min(mn2,mn3);
        if(mn%2==0)
        {
            cout<<mn/2<<endl;
        }
        else
        {
            cout<<(mn/2)+1<<endl;
        }
    }

    return 0;
}
