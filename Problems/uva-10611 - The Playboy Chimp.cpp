#include<bits/stdc++.h>
using namespace std;
#define M 50010

long long a[M];

long long lowerBound(long long n,long long k){
    long long l=0;
    long long h=n-1;
    while(l<=h){
        long long mid=(l+h)/2;
        if(k==a[mid]){
            h=mid-1;
        }

        else if(k>a[mid])
            l=mid+1;
        else
            h=mid-1;
    }
    return l-1;
}

long long upperBound(long long n,long long k){
    long long l=0;
    long long h=n-1;
    while(l<=h){
        long long mid=(l+h)/2;
        if(k==a[mid]){
            l=mid+1;
        }

        else if(k>a[mid])
            l=mid+1;
        else
            h=mid-1;
    }
    return l;
}

int main()
{
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++)
        cin>>a[i];

    long long q;
    cin>>q;

    for(long long i=0;i<q;i++){
        long long k;
        cin>>k;
        long long lb=lowerBound(n,k);
        long long ub=upperBound(n,k);

        if(lb<0)
            cout<<"X ";
        else
            cout<<a[lb]<<" ";

        if(ub>=n)
            cout<<"X"<<endl;
        else
            cout<<a[ub]<<endl;
    }
    return 0;
}
