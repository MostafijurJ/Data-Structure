#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long>v;
    for(long long i=0;i<4;i++){
        long long x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    long long ck=0;
    for(long long i=0;i<3;i++){
        if(v[i]==v[i+1]){
            ck++;
        }
    }

    cout<<ck<<endl;

    return 0;
}
