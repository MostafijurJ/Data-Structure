#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,d,c1,c2;
    cin>>a>>b>>c>>d>>c1>>c2;

    long long mx=0;

        long long mn=min(a,d);
        long long mn2=min(b,d-mn);
        mn2=min(mn2,c);
        long long sum=(mn*c1)+(c2*mn2);

        long long mn1=min(b,c);
        mn1=min(mn1,d);
        long long mn3=min(abs(mn1-d),a);

        long long sum1=(mn1*c2)+(c1*mn3);

        mx=max(sum,sum1);

        cout<<mx<<endl;

    return 0;
}
