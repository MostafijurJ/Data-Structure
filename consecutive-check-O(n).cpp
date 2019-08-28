#include<bits/stdc++.h>
using namespace std;

bool visit[100];

int getMin(int a[],int n){
    int mn=INT_MAX;

    for(int i=0;i<n;i++)
        mn=min(mn,a[i]);
    return mn;
}

int getMax(int a[],int n){
    int mx=0;

    for(int i=0;i<n;i++)
        mx=max(mx,a[i]);
    return mx;
}

bool checkConsecutive(int a[],int n){
    if(n<1)
        return false;

    int mx=getMax(a,n);
    int mn=getMin(a,n);

    if(mx-mn+1==n){
        for(int i=0;i<n;i++){
            if(visit[a[i]])
                return false;
            visit[a[i]]=true;
        }
        return true;
    }
    return false;
}

int main()
{
    int a[50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(checkConsecutive(a,n))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
