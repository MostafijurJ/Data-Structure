#include<bits/stdc++.h>
using namespace std;

#define M 1005000

bool prime[M];

void seive(){
    prime[0]=prime[1]=true;

    for(long long i=2;i*i<M;i++){
        if(prime[i]==false){
            for(long long j=i*i;j<M;j+=i){
                prime[j]=true;
            }
        }
    }
}

bool perfectSquare(long long n){
    double m=sqrt(n);

    if(m==(int)m)
        return true;
    return false;
}

int main()
{
    seive();

    long long n;
    cin>>n;
    vector<long long>v;
    for(long long i=0;i<n;i++){
        long long x;
        cin>>x;
        v.push_back(x);
    }

    long long sz=v.size();

    for(long long i=0;i<sz;i++){
        long long p=sqrt(v[i]);

        if(perfectSquare(v[i]) && prime[p]==false){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
