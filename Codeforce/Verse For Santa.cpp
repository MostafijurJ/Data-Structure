#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;

        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        int mx=0;
        int sum=0;
        int pos=0;
        int k=0;
        for(int i=0;i<n-1;i++){
           sum+=v[i];
           if(v[i]>mx){
                mx=v[i];
                pos=i+1;
           }
           k++;
           if(sum>=s){
                if(((sum-mx)+v[i+1]<=sum)&&((sum-mx)+v[i+1]<sum+mx)){
                    cout<<pos<<endl;
                    break;
                }
                if(sum-mx<s){
                    cout<<pos<<endl;
                    break;
                }
           }
        }
        if(n-1==k){
            cout<<0<<endl;
        }
    }
    return 0;
}
