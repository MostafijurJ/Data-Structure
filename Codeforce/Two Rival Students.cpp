#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,a,b;
    cin>>n>>x>>a>>b;
    if(a>b){
        swap(a,b);
    }

    while(x>0){
        if(a-1>=1){
            a--;
            x--;
        }
        else if(b+1<=n){
            b++;
            x--;
        }

        if(a==1 && b==n){
            break;
        }
    }

    cout<<b-a<<endl;
    }

    return 0;
}
