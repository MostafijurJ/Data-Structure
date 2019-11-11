#include<bits/stdc++.h>
using namespace std;

int a[1010];

int solve(int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]>1){
            sum++;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        a[i]=x+y+z;
    }

    cout<<solve(n)<<endl;

    return 0;
}
