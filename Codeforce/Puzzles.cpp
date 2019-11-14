#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int>v;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;

        v.push_back(x);
    }
    sort(v.begin(),v.end());

    int mn=INT_MAX;
    for(int i=n-1,j=0;i<m;i++,j++){
        mn=min(mn,v[i]-v[j]);
    }

    cout<<mn<<endl;

    return 0;
}
