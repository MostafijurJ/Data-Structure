#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    int mx=0;

    for(int x=0;x<=n;x++){
        for(int y=0;y<=n;y++){
            int z=abs((n-(a*x+b*y))/c);
            //cout<<x<<" "<<y<<" "<<z<<endl;
            if(a*x+b*y+c*z==n){
                mx=max(mx,x+y+z);

            }
        }
    }

    cout<<mx<<endl;

    return 0;
}
