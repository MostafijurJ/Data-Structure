#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int m=(60*a)+b;
        int n=(60*23)+60;

        cout<<n-m<<endl;
    }
    return 0;
}
