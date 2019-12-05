#include<bits/stdc++.h>
using namespace std;


string newString(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='?'){
            if(i==0){
                if(s[i+1]=='a'){
                    s[i]='b';
                }
                else if(s[i+1]=='b'){
                    s[i]='c';
                }
                else{
                    s[i]='a';
                }
            }
            else if(i==s.size()-1){
                if(s[i-1]=='a'){
                    s[i]='b';
                }
                else if(s[i-1]=='b'){
                    s[i]='c';
                }
                else{
                    s[i]='a';
                }
            }
            else{
                if(s[i-1]=='a' && (s[i+1]=='a'||s[i+1]=='b')){
                    s[i]='c';
                }
                else if(s[i-1]=='a' && (s[i+1]=='a'||s[i+1]=='c')){
                    s[i]='b';
                }
                else if(s[i-1]=='b' && (s[i+1]=='b'||s[i+1]=='c')){
                    s[i]='a';
                }
                else if(s[i-1]=='b' && (s[i+1]=='b'||s[i+1]=='a')){
                    s[i]='c';
                }
                else if(s[i-1]=='c' && (s[i+1]=='c'||s[i+1]=='a')){
                    s[i]='b';
                }
                else{
                    if(s[i-1]=='a'){
                        s[i]='b';
                    }
                    else if(s[i-1]=='b'){
                        s[i]='c';
                    }
                    else{
                        s[i]='a';
                    }
                }
            }
        }
    }
    return s;
}

bool check(string s){
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s2=newString(s);
        //cout<<s2<<endl;
        if(check(s2)){
            cout<<s2<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }

    }
    return 0;
}
