#include<bits/stdc++.h>
using namespace std;

vector<int>v,v1;
int getNumber(int n){
    int ck=0;
    for(int i=0;i<v1.size();i++){
        if(v1[i]==n){
            ck++;
        }
    }
    return ck;
}

void copyVector(){
    for(int i=0;i<v.size();i++){
        v1.push_back(v[i]);
    }
}

int main()
{
    int n,m,v1,p;

    cin>>n>>m>>v1>>p;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    copyVector();

    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    reverse(v.begin(),v.end());

    int mx=0;
    for(int i=p+1;i<v.size();i++){
        //cout<<v[i]<<endl;
        mx+=getNumber(v[i]);
    }

    cout<<n-mx<<endl;

    return 0;
}
