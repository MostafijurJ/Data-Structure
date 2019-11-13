#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    for(int i=1;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

string valid(string s){
    if(s[0]>='A' && s[0]<='Z'){
        s[0]=char('a'+(s[0]-'A'));
    }
    else{
        s[0]=char('A'+(s[0]-'a'));
    }
    for(int i=1;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=char('a'+(s[i]-'A'));
        }
    }
    return s;
}

int main()
{
    string s;
    cin>>s;
    if(s.size()==1){
        if(s[0]>='a' && s[0]<='z'){
            s[0]=char('A'+(s[0]-'a'));
        }
        else{
            s[0]=char('a'+(s[0]-'A'));
        }
        cout<<s<<endl;
    }
    else{
        if(check(s)){
            string s1=valid(s);
            cout<<s1<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}
