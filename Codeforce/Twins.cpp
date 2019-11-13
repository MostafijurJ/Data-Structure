#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int>v;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }

    int ck=0;
    for(int i=0;i<n;i++){
        ck++;
        if(v[i]>(v[n-1]/2)){
            break;
        }
    }

    cout<<ck<<endl;

    return 0;
}
