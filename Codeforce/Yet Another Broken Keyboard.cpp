#include<bits/stdc++.h>
using namespace std;

string s;

void check(char c){
    long long sz=s.size();

    for(long long i=0;i<sz;i++){
        if(s[i]==c){
            s[i]='1';
        }
    }
}

long long numberOfSubstring(long long n){
    return ((n*(n+1))/2);
}

int main()
{
    long long n,a;
    cin>>n>>a;
    cin>>s;

    for(long long i=0;i<a;i++){
        char c;
        cin>>c;
        check(c);
    }

    long long ck=0;
    long long sum=0;

    for(long long i=0;i<n;i++){
        if(s[i]=='1'){
            ck++;
        }
        else{
            sum+=numberOfSubstring(ck);
            ck=0;
        }
    }
    sum+=numberOfSubstring(ck);

    cout<<sum<<endl;

    return 0;
}
