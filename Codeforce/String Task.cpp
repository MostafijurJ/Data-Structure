#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sz=s.size();
    for(int i=0;i<sz;i++){
        if(s[i]>='A' && s[i]<='Z'){
            if(s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='Y'){
                cout<<"."<<char('a'+(s[i]-'A'));
            }
        }
        else{
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y'){
                cout<<"."<<s[i];
            }
        }
    }
    cout<<endl;
    return 0;
}
