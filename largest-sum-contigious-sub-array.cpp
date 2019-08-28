#include<bits/stdc++.h>
using namespace std;

int maxSum(int a[],int sz){
    int mx=INT_MIN,ms=0;

    for(int i=0;i<sz;i++){
        ms=ms+a[i];
        if(ms<0)
            ms=0;
        else if(mx<ms)
            mx=ms;
    }
    return mx;
}

int main()
{
    int a[50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"max sum : "<<maxSum(a,n)<<endl;

    return 0;
}
