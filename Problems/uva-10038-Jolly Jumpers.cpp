#include<bits/stdc++.h>
using namespace std;
#define M 3010

int mark[M];

void init(int n){
    for(int i=0;i<=n;i++){
        mark[i]=0;
    }
}

bool check(vector<int>v,int n){
    vector<int>v1;
    int sz=v.size();

    for(int i=0;i<sz-1;i++){
        v1.push_back(abs(v[i]-v[i+1]));
    }

    int ln=v1.size();
    init(n);

    for(int i=0;i<ln;i++){
        mark[v1[i]]=1;
    }

    for(int i=1;i<=n-1;i++){
        if(mark[i]!=1)
            return false;

        //cout<<i<<" "<<mark[i]<<endl;
    }

    return true;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    while(scanf("%d",&n)!=EOF){
        vector<int>v;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;

            v.push_back(x);
        }

        if(check(v,n)){
            cout<<"Jolly"<<endl;
        }
        else{
            cout<<"Not jolly"<<endl;
        }
    }
    return 0;
}
