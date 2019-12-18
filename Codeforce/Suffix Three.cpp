#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int sz=s.size();

        if(s[s.size()-2]=='p' && s[s.size()-1]=='o'){
            cout<<"FILIPINO"<<endl;
        }
        else if((s[sz-4]=='d' && s[sz-3]=='e' && s[sz-2]=='s' && s[sz-1]=='u') || (s[sz-4]=='m' && s[sz-3]=='a' && s[sz-2]=='s' && s[sz-1]=='u')){
            cout<<"JAPANESE"<<endl;
        }
        else if(s[sz-5]=='m'&&s[sz-4]=='n'&&s[sz-3]=='i'&&s[sz-2]=='d'&&s[sz-1]=='a'){
            cout<<"KOREAN"<<endl;
        }
    }

    return 0;
}
