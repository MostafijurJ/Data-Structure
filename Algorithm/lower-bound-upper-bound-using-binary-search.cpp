#include<bits/stdc++.h>
using namespace std;

int lowerBound(int a[],int n,int k){
    int l=0,ck=0;
    int h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(k==a[mid]){
            h=mid-1;
            ck=1;
        }

        else if(k>a[mid])
            l=mid+1;
        else
            h=mid-1;
    }

//    if(ck)
//        return l-1;
    return l-1;
}

int upperBound(int a[],int n,int k){
    int l=0;
    int h=n-1;
    int ck=0;
    while(l<=h){
        int mid=(l+h)/2;
        if(k==a[mid]){
            l=mid+1;
            ck=1;
        }

        else if(k>a[mid])
            l=mid+1;
        else
            h=mid-1;
    }
//    if(ck)
//        return l;
    return l;
}

int main()
{
    int a[20];
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i];
    while(1){
        int k;
    cin>>k;
    cout<<lowerBound(a,n,k)<<endl;
    cout<<upperBound(a,n,k)<<endl;
    }
    return 0;
}
