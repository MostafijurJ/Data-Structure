#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v;

    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }

    bool flag=false;
    ll px=0,py=0;

    for(ll i=0;i<v.size()-1;i++){
        if(abs(v[i]-v[i+1])>=2){
            flag=true;
            px=i+1;
            py=i+2;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
        cout<<px<<" "<<py<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
