#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sz=s.size();

    int mx=1;
    int tmp=0;

    for(int i=0;i<sz-1;i++){
        if(s[i]==s[i+1]){
            mx++;
        }
        else{
            mx=1;
        }
        tmp=max(tmp,mx);

    }

    if(tmp>=7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
