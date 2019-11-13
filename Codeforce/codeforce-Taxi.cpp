#include<bits/stdc++.h>
using namespace std;

int a[6];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    int sum=0;

    sum+=a[4];
    if(a[3]>a[1]){
        sum+=a[3];
        a[1]=0;
    }
    else{
       sum+=a[3];
       a[1]=a[1]-a[3];
    }

    sum+=a[2]/2;
    if(a[2]%2!=0){
        sum++;
        a[1]=a[1]-2;
    }

    if(a[1]%4!=0 && a[1]>0){
        sum+=(a[1]/4)+1;
    }
    else{
        sum+=a[1]/4;
    }

    cout<<sum<<endl;

    return 0;
}
