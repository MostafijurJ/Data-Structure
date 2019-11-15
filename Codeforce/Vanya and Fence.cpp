#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    vector<int>v;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int w=0;

    for(int i=0;i<n;i++){
        if(v[i]>h){
            w+=2;
        }
        else{
            w++;
        }
    }

    cout<<w<<endl;

    return 0;
}
