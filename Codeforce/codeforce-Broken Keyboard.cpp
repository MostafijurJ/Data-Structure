#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        //s+='0';

        vector<char>v;

        for(int i=0;i<s.size();i++){
            if(s[i]!=s[i+1]){
                v.push_back(s[i]);
            }
            else{
                i++;
            }
        }

        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());

        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
    }
    return 0;
}
