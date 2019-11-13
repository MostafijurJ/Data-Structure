#include<bits/stdc++.h>
using namespace std;

int a[26];

void solve(string s){
    int sz=s.size();

    for(int i=0;i<sz;i++){
        a[s[i]-'a']++;
    }

    int ck=0;
    for(int i=0;i<26;i++){
        if(a[i]>0){
            ck++;
        }
    }

    if(ck%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}

int main()
{
    string s;
    cin>>s;
    solve(s);
    return 0;
}
