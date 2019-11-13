#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    while(n!=0){
        if(n%10!=4 && n%10!=7){
            return false;
        }
        n=n/10;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    for(int i=4;i<=n;i++){
        if(check(i)){
            if(n%i==0){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
