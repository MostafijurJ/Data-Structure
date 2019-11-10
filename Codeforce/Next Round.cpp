#include<bits/stdc++.h>
using namespace std;

int a[105];

int solve(int k){
    int sum=0;
    for(int i=k;i<=100;i++){
        if(i!=0){
            sum+=a[i];
        }
    }
    return sum;
}

int main()
{

    int n,k;
    cin>>n>>k;
    int ck=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
        if(i==k-1){
            ck=x;
        }
    }
    cout<<solve(ck)<<endl;

    return 0;
}
