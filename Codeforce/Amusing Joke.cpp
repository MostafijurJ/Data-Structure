#include<bits/stdc++.h>
using namespace std;

int a[30];
int b[30];

bool solve(string s1,string s2,string s3){
    for(int i=0;i<s1.size();i++){
        a[s1[i]-'A']++;
    }

    for(int i=0;i<s2.size();i++){
        a[s2[i]-'A']++;
    }

    for(int i=0;i<s3.size();i++){
        b[s3[i]-'A']++;
    }

    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(solve(s1,s2,s3)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
