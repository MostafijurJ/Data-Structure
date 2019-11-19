#include<bits/stdc++.h>
using namespace std;

int a[105];

bool complete(int n){
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int p,q;
    cin>>p;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        a[x]++;
    }

    if(complete(n)){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }

    return 0;
}
