#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            v.push_back(x);
        }

        ll m;
        cin>>m;
        vector<ll>v1;
        for(ll i=0;i<m;i++){
            ll x;
            cin>>x;
            v1.push_back(x);
        }

        ll p0=0,p1=0;
        ll q0=0,q1=0;

        for(ll i=0;i<v.size();i++){
            if(v[i]%2==0){
                p0++;
            }
            else{
                p1++;
            }
        }

        for(ll i=0;i<v1.size();i++){
            if(v1[i]%2==0){
                q0++;
            }
            else{
                q1++;
            }
        }

        cout<<p0*q0+p1*q1<<endl;
    }
    return 0;
}
