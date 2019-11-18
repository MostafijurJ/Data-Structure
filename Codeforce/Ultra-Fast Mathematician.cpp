#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    for(int i=0;i<s1.size();i++){
        int x=s1[i]-'0';
        int y=s2[i]-'0';

        if(x+y==1){
            cout<<1;
        }
        else{
            cout<<0;
        }
    }
    cout<<endl;

    return 0;
}
