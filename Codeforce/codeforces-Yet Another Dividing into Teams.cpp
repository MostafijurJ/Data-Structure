#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        if(n==1){
            cout<<1<<endl;
        }
        else{
            sort(v.begin(),v.end());
            int val=0;
            for(int i=1;i<v.size();i++){
                if(v[i]-v[i-1]==1){
                    val++;
                }
            }

            if(val>0)
                cout<<2<<endl;
            else
                cout<<1<<endl;
            v.clear();
        }
    }
    return 0;
}
