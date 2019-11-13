#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,w,k;
    cin>>k>>n>>w;

    long long cost=k*((w*(w+1))/2);
    if(cost>n){
        cout<<cost-n<<endl;
    }
    else{
        cout<<0<<endl;
    }

    return 0;
}
