#include<bits/stdc++.h>
using namespace std;

int minSwap(vector<int>v,int val){
    int sz=v.size();
    int res=0;

    for(int i=0;i<sz;i++){
        if(v[i]>val){
            res+=(v[i]-val);
        }
    }

    return res;
}

int main()
{
    int t=1;
    while(1){
        int n;
        cin>>n;

        if(n==0)
            break;

        vector<int>v;
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            v.push_back(x);
        }
        cout<<"Set #"<<t<<endl;
        cout<<"The minimum number of moves is "<<minSwap(v,(sum/n))<<"."<<endl;
        cout<<endl;
        t++;
    }
    return 0;
}
