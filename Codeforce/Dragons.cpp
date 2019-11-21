#include<bits/stdc++.h>
using namespace std;

struct pr{
    long long x,y;
    pr(long long _x,long long _y){
        x=_x;
        y=_y;
    }
    pr(){}
};

bool compare(pr a,pr b){
    if(a.x>=b.x){
        return 0;
    }
    return 1;
}

vector<pr>v;

bool solve(long long n){
    for(long long i=0;i<v.size();i++){
        if(n>v[i].x){
            n+=v[i].y;
        }
        else{
            return false;
        }
    }
    return true;
}


int main()
{
    long long n,m;
    cin>>n>>m;


    for(long long i=0;i<m;i++){
        long long x,y;
        cin>>x>>y;
        v.push_back(pr(x,y));
    }

    sort(v.begin(),v.end(),compare);

    if(solve(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
