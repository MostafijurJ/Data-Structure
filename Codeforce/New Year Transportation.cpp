#include<bits/stdc++.h>
using namespace std;

int a[30510];

bool check(int n,int t){
    int i=1;
    a[n]=1;
    while(i<=n){
        i+=a[i];
        if(i==t){
            return true;
        }
    }
    return false;
}

int main()
{
    int n,t;
    cin>>n>>t;
    for(int i=1;i<n;i++){
        cin>>a[i];
    }

    if(t==1){
        cout<<"YES"<<endl;
    }
    else{
        if(check(n,t)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
