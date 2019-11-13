#include<bits/stdc++.h>
using namespace std;

int a[1010];

int main()
{
    int n;
    int mx=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        a[i]=(a[i-1]-x)+y;
        mx=max(mx,a[i]);
    }
    cout<<mx<<endl;

    return 0;
}
