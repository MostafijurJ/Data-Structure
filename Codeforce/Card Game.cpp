#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k1,k2;
        cin>>n>>k1>>k2;

        vector<int>v1,v2;
        int mx=0;
        for(int i=0;i<k1;i++){
            int x;
            cin>>x;
            mx=max(mx,x);
            v1.push_back(x);
        }

        for(int i=0;i<k2;i++){
            int x;
            cin>>x;
            mx=max(mx,x);
            v2.push_back(x);
        }

        bool flag=false;

        for(int i=0;i<k1;i++){
            if(v1[i]==mx){
                flag=true;
                break;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
