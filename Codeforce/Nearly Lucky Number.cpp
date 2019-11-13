#include<bits/stdc++.h>
using namespace std;


long long countLuckyNumber(long long n){
    long long cnt=0;

    while(n!=0){
        if(n%10==4 || n%10==7){
            cnt++;
        }
        n=n/10;
    }
    return cnt;
}

bool isLuckyNumber(long long n){
    if(n==0){
        return false;
    }
    while(n!=0){
        if(n%10!=4 && n%10!=7){
            return false;
        }
        n=n/10;
    }
    return true;
}

int main()
{
    long long n;
    cin>>n;

    long long num=countLuckyNumber(n);

    if(isLuckyNumber(num)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
