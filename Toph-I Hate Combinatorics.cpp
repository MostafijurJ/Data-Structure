#include<bits/stdc++.h>
using namespace std;

#define M 1000000007

int a[1000050];

void precal(){
    a[0]=0;
    a[1]=1;

    for(int i=2;i<=1000000;i++){
        a[i]=((a[i-1]%M)+(a[i-2]%M))%M;
    }
}

int main()
{
    precal();
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;

        cout<<a[x]<<endl;
    }
    return 0;
}
