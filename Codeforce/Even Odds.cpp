#include<bits/stdc++.h>
using namespace std;

long long getEvenNumber(long long n){
    return 2+((n-1)*2);
}

long long getOddNumber(long long n){
    return 1+((n-1)*2);
}

int main()
{
    long long n,k;
    cin>>n>>k;

    long long a=0,b=0;

    if(n%2==0){
        a=n/2;
        b=a;
    }
    else{
        a=(n/2)+1;
        b=(n/2);
    }

    if(k>a){
        cout<<getEvenNumber(k-a)<<endl;
    }
    else{
        cout<<getOddNumber(k)<<endl;
    }

    return 0;
}
