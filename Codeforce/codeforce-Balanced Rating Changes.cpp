#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int val=1;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        if(x%2==0){
            v.push_back(x/2);
        }
        else{
            v.push_back((x+val)/2);
            val*=-1;
        }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    return 0;
}
