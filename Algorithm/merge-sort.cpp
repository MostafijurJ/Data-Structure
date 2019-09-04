#include<bits/stdc++.h>
using namespace std;
int a[100];
int temp[100];

void mergeArray(int l,int mid,int h);

void divide(int l,int h){
    if(l<h){
        int mid=(l+h)/2;

        divide(l,mid);
        divide(mid+1,h);

        mergeArray(l,mid,h);
    }
}

void mergeArray(int l,int mid,int h){
    int i=l;
    int j=mid+1;
    int k=0;

    while(i<=mid && j<=h){
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }

    while(i<=mid){
        temp[k++]=a[i++];
    }

    while(j<=h){
        temp[k++]=a[j++];
    }

    for(int i=0;i<k;i++){
        a[l++]=temp[i];
    }
}


int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];

    divide(0,n-1);

    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;

    return 0;
}
