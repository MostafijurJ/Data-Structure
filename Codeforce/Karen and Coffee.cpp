#include<bits/stdc++.h>
using namespace std;
#define M 200010

int arr[M];

int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        arr[l]+=1;
        arr[r+1]-=1;
    }

    for(int i=1;i<M;i++){
        arr[i]+=arr[i-1];
    }

    for(int i=1;i<M;i++){
        if(arr[i]>=k){
            arr[i]=arr[i-1]+1;
        }
        else{
            arr[i]=arr[i-1];
        }
    }

    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        cout<<arr[b]-arr[a-1]<<endl;
    }

    return 0;
}
