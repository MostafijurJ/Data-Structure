#include<bits/stdc++.h>
using namespace std;
#define M 1010

long long a[M];
long long n,m;

bool valid(long long cap){
    long long ck=1;
    long long sum=0;
    for(long long i=0;i<n;i++){
        if(sum+a[i]<=cap){
            sum+=a[i];
        }
        else{
            sum=a[i];
            ck++;
        }
    }

    if(ck>m)
        return false;
    else
        return true;
}

long long binarySearch(long long mx){
    long long low=mx;
    long long high=1000000000000;
    long long ans=0;

    while(low<=high){
        long long mid=(low+high)/2;

        if(valid(mid)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return ans;
}

int main()
{
    long long t;
    cin>>t;
    for(long long k=0;k<t;k++){
        long long mx=0;
      cin>>n>>m;
      for(long long i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
      }
      cout<<"Case "<<k+1<<": "<<binarySearch(mx)<<endl;
    }
    return 0;
}
