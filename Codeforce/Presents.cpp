#include<bits/stdc++.h>
using namespace std;

int a[105];
int temp[105];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=1;i<=n;i++){
        temp[a[i]]=i;
    }

    for(int i=1;i<=n;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;

    return 0;
}
