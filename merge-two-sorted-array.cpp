#include<bits/stdc++.h>
using namespace std;
int c[100];

void mergeArray(int a[],int b[],int n,int m){
    int i=0,j=0,k=0;

    while(i<n && j<m){

        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }

    while(i<n){
        c[k++]=a[i++];
    }

    while(j<m){
        c[k++]=b[j++];
    }
}

int main()
{
    int a[50],b[50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>b[i];

    mergeArray(a,b,n,m);

    for(int i=0;i<n+m;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

    return 0;
}
