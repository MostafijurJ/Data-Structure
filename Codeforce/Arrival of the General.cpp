#include<bits/stdc++.h>
using namespace std;

int a[105];
int mxPos=0,mnPos=0;

void getPos(int n,int mx,int mn){
    for(int i=0;i<n;i++){
        if(a[i]==mn){
            mnPos=i;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(a[i]==mx){
            mxPos=i;
        }
    }
}

int main()
{
    int n;
    cin>>n;

    int mx=0,mn=200;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }

    getPos(n,mx,mn);

    if(mxPos>mnPos){
        cout<<mxPos+(n-1-mnPos)-1<<endl;
    }
    else{
        cout<<mxPos+(n-1-mnPos)<<endl;
    }

    return 0;
}
