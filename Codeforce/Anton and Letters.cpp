#include<bits/stdc++.h>
using namespace std;

int a[30];

int solve(){
    int ck=0;
    for(int i=0;i<26;i++){
        if(a[i]>0){
            ck++;
        }
    }
    return ck;
}

int main()
{
    string s;
    getline(cin,s);

    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            a[s[i]-'a']++;
        }
    }

    cout<<solve()<<endl;

    return 0;
}
