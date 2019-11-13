#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ck=0;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;

        if(y-x>=2){
            ck++;
        }
    }

    cout<<ck<<endl;

    return 0;
}
