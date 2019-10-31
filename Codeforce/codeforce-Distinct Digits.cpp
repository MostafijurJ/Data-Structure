#include<bits/stdc++.h>
using namespace std;

int a[10];

void init(){
    for(int i=0;i<10;i++){
        a[i]=0;
    }
}

bool valid(int n){
    init();

    while(n!=0){
        a[n%10]++;
        n=n/10;
    }

    for(int i=0;i<10;i++){
        if(a[i]>1)
            return false;
    }
    return true;
}

int solve(int l,int r){
    for(int i=l;i<=r;i++){
        if(valid(i)){
            return i;
        }
    }
    return -1;
}

int main()
{
    int l,r;
    cin>>l>>r;
    cout<<solve(l,r)<<endl;
    return 0;
}
