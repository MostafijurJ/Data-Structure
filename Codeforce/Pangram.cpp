#include<bits/stdc++.h>
using namespace std;

int a[30];

bool check(string s){
    int sz=s.size();
    for(int i=0;i<sz;i++){
        if(s[i]>='A' && s[i]<='Z'){
            a[s[i]-'A']++;
        }
        else{
            a[s[i]-'a']++;
        }
    }

    for(int i=0;i<26;i++){
        if(a[i]==0){
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(check(s)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
