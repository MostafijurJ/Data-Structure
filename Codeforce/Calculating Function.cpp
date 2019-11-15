#include<bits/stdc++.h>
using namespace std;

long long getEvenSum(long long n){
    return n*(n+1);
}

long long getOddSum(long long n){
    return n*n;
}

int main()
{
    long long n;
    cin>>n;

    long long a,b;
    if(n%2==0){
        a=n/2;
        b=a;
    }
    else{
        a=(n/2)+1;
        b=n/2;
    }

    long long odd=-getOddSum(a);
    long long even=getEvenSum(b);

    cout<<odd+even<<endl;

    return 0;
}
