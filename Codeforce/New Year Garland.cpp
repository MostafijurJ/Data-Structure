#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
        vector<long long>v;
        long long a,b,c;
        cin>>a>>b>>c;

        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(),v.end());
        bool flag=true;
        if(v[0]==v[1] && v[1]==v[2]){
            flag=true;
        }
        else{
            if((v[0]+v[1])<(v[2]-1)){
                flag=false;
            }
        }

        if(flag==true){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
