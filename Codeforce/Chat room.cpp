#include<bits/stdc++.h>
using namespace std;

string s1,s2="hello";

void solve(){
    int j=0,ck=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[j]){
            j++;
            ck++;
        }
        if(ck==5){
            break;
        }
    }

    if(ck==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    cin>>s1;
    solve();
    return 0;
}
