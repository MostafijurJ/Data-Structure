#include<bits/stdc++.h>
using namespace std;

int a[35];
int h[35];

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>h[i]>>a[i];
    }

    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j && h[i]==a[j]){
                sum++;
            }
        }
    }

    cout<<sum<<endl;

    return 0;
}
