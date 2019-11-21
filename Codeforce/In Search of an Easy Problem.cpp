#include<bits/stdc++.h>
using namespace std;

int a[105];

bool check(int n){
    for(int i=0;i<n;i++){
        if(a[i]==1){
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(check(n)){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }

    return 0;
}
