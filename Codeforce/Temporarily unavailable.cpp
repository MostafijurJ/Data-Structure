#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,r;

        cin>>a>>b>>c>>r;

        if(a>b)
        {
            swap(a,b);
        }

        long long len=abs(b-a);
        if(c>a && c<b)
        {
            if(c-r<=a && c+r>=b){
                len=0;
            }
            if(c-r<=a && c+r<b){
                //len-=c-a;
                //len-=b-(c+r);
                len=b-(c+r);
            }
            if(c+r>=b && c-r>a){
                //len-=b-c;
                //len-=(c-r)-a;
                len=(c-r)-a;
            }
            if(c-r>a && c+r<b){
                len-=(c+r)-(c-r);
            }

        }

        if(c>=b)
        {
            if(c-r<=a){
                len=0;
            }
            if(c-r<=b && c-r>a){
                len-=(b-(c-r));
            }
        }

        if(c<=a)
        {
            if(c+r>=b){
                len=0;
            }
            if(c+r>=a && c+r<b){
                len-=(c+r)-a;
            }
        }

        cout<<len<<endl;
    }


    return 0;
}
