#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<21){
            if(n>=15 && n<=20){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            long long ck=0;
            for(long long i=15;i<=20;i++){
                long long p=n-i;
                if(p%14==0){
                    ck=1;
                    break;
                }
            }
            if(ck==1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
        }
    }

    return 0;
}
