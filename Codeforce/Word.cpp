#include<bits/stdc++.h>
using namespace std;

string toUpper(string s){
    int sz=s.size();
    for(int i=0;i<sz;i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=char('A'+(s[i]-'a'));
        }
    }

    return s;
}

string toLower(string s){
    int sz=s.size();
    for(int i=0;i<sz;i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=char('a'+(s[i]-'A'));
        }
    }

    return s;
}

void solve(string s){
    int r1=0;
    int r2=0;

    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            r1++;
        }
        else{
            r2++;
        }
    }

    if(r1>r2){
        cout<<toUpper(s)<<endl;
    }
    else{
        cout<<toLower(s)<<endl;
    }
}

int main()
{
    string s;
    cin>>s;
    solve(s);
    return 0;
}
