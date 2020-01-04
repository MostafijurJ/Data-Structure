#include<bits/stdc++.h>
using namespace std;

long long a[2010];
long long b[2010];
long long c[2010];

void init(long long n,long long m,long long x){
    for(long long i=0;i<n;i++){
        c[i]=0;
    }
    for(long long i=0;i<n;i++){
        c[i]=((a[i]%m)+(x%m))%m;
    }
}


bool Equal(long long n,long long m,long long x){
    init(n,m,x);
    sort(c,c+n);
    sort(b,b+n);

    for(long long i=0;i<n;i++){
        if(c[i]!=b[i]){
            return false;
        }
    }
    return true;
}


long long binarySearch(long long n,long long m){
    long long i=0;
    while(1){
        if(Equal(n,m,i)){
            return i;
        }
        i++;
    }
}

int main()
{
    long long n,m;
    cin>>n>>m;

    long long mn=1000000000;

    for(long long i=0;i<n;i++){
       cin>>a[i];
    }

    for(long long i=0;i<n;i++){
        cin>>b[i];
    }

    long long ck=binarySearch(n,m);
    cout<<ck<<endl;

    return 0;
}
