#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int>v;
    int sz=s.size();

    for(int i=0;i<sz;i++){
        if(s[i]>='0' && s[i]<='9'){
            v.push_back(s[i]-'0');
        }
    }
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i<v.size()-1){
            cout<<"+";
        }
    }
    cout<<endl;

    return 0;
}
