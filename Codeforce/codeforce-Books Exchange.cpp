#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        vector<int>v;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        for(int i=1;i<=n;i++){
            int val=1;
            int pos=v[i-1];

            while(pos!=i){
                val++;
                pos=v[pos-1];
            }
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}
