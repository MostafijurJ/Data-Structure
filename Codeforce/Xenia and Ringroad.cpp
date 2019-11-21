#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n,m;
    cin>>n>>m;
    vector<long long>a;
    a.push_back(1);
    for(long long i=1;i<=m;i++){
        long long x;
        cin>>x;
        a.push_back(x);
    }

    long long sum=0;
    for(long long i=0;i<m;i++){
        if(a[i+1]>=a[i]){
            sum+=(a[i+1]-a[i]);
        }
        else{
            sum+=(n-a[i])+a[i+1];
        }
    }

    cout<<sum<<endl;

    return 0;
}

