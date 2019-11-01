#include<bits/stdc++.h>
using namespace std;
#define M 1000000

bool marked[M+20];
vector<long long>v;

void sieve() {
  for (long long i = 2; i * i <= M; i++) {
    if (marked[i] == false) { // i is a prime
      for (long long j = i * i; j <= M; j += i) {
        marked[j] = true;
      }
    }
  }
}

void init(){
    sieve();
    for(long long i=2;i<=M;i++){
        if(marked[i]==false){
            v.push_back(i);
        }
    }

    //cout<<v[v.size()-1]<<endl;
}

bool solve(long long n){
    //long long sz=sqrt(n);
    long long i=0;
    while(1){
        if(v[i]<=n){
            if(n%v[i]==0){
                return true;
            }
        }
        else{
            break;
        }
        i++;

        if(i==v.size()){
            return true;
        }
    }
    return false;
}

int main()
{
    init();
    long long t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long z=x-y;

        if(z>1){
            if(solve(z)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
