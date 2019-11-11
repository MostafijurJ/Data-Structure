#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    int sz1=s1.size();
    int sz2=s2.size();

    for(int i=0;i<sz1;i++){
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]='a'+(s1[i]-'A');
        }

        if(s2[i]>='A' && s2[i]<='Z'){
            s2[i]='a'+(s2[i]-'A');
        }
    }

    //sort(s1.begin(),s1.end());
    //sort(s2.begin(),s2.end());

    //cout<<s1<<endl;
    //cout<<s2<<endl;

    cout<<s1.compare(s2)<<endl;

    return 0;
}

