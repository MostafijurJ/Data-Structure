#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    long long n;
    cin>>n;
    while(n--){
        cin>>a>>b;
        long long res=abs(a-b);

        long long stp=0;

        stp+=res/5;
        res=res%5;
        stp+=res/2;
        res=res%2;
        stp+=res/1;

        cout<<stp<<endl;

    }


    return 0;
}
