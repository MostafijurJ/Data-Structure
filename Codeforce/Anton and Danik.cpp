#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;

    int a=0,d=0;
    int sz=s.size();

    for(int i=0;i<sz;i++){
        if(s[i]=='A'){
            a++;
        }
        else{
            d++;
        }
    }

    if(a>d){
        cout<<"Anton"<<endl;
    }
    else if(d>a){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }

    return 0;
}
