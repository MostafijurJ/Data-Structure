#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum=0;

        while(1){
            if(b>0 && c>=2){
                sum+=3;
                b--;
                c-=2;
            }
            else if(a>0 && b>=2){
                sum+=3;
                a--;
                b-=2;
            }
            else{
                break;
            }
            //cout<<a<<" "<<b<<" "<<c<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}
