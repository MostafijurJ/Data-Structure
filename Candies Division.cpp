#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;

        if(n%k==0){
            cout<<n<<endl;
        }
        else{
            long long d=n/k;
            long long m=n%k;
            if(m<=k/2){
                cout<<(d*k)+m<<endl;
            }
            else{
                cout<<(d*k)+(k/2)<<endl;
            }
        }
    }
    return 0;
}
