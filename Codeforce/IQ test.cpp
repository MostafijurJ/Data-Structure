#include<bits/stdc++.h>
using namespace std;

int a[110];

int main()
{
    int n;
    cin>>n;
    int even=0,odd=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    int ck=0;
    for(int i=1;i<=n;i++){
        if(even>odd){
            if(a[i]%2!=0){
                ck=i;
            }
        }
        else{
            if(a[i]%2==0){
                ck=i;
            }
        }
    }

    cout<<ck<<endl;

    return 0;
}
