#include<bits/stdc++.h>
using namespace std;

int a[100010];

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ck=1;
    int mx=1;

    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            ck++;
        }
        else{
            mx=max(mx,ck);
            ck=1;
        }
    }
    mx=max(mx,ck);

    cout<<mx<<endl;

    return 0;
}
