#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    map<string,int>mp;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(mp[s]){
           cout<<s<<mp[s]<<endl;
        }
        else{
            cout<<"OK"<<endl;
        }
        mp[s]++;
    }
    return 0;
}
