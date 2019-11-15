#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int mx=0;
    for(int i=0;i<n-1;i++){
        if(v[i]!=v[i+1]){
            mx++;
        }
    }

    cout<<mx+1<<endl;

    return 0;
}
