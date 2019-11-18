#include<bits/stdc++.h>
using namespace std;

int a[100010];
int b[100010];

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int>v;
        int flag=0;
        int flag2=0;
        int ck=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                v.push_back(abs(a[i]-b[i]));
                flag=1;
            }
            if(flag==1 && a[i]==b[i]){
                v.push_back(-1);
            }
            if(a[i]==b[i]){
                ck++;
            }
            if(a[i]>b[i]){
                flag2=1;
                break;
            }
        }

        if(flag2==1){
            cout<<"NO"<<endl;
        }
        else{

            if(ck==n){
            cout<<"YES"<<endl;
            //return 0;
        }
        else{
                    bool tmp=true;
        int x=v[0];

        for(int i=1;i<v.size();i++){
            if(v[i-1]==-1 && v[i]>0){
                tmp=false;
            }
            if(v[i]!=-1 && v[i]!=x){
                tmp=false;
            }
        }

        if(tmp){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }

        }
    }
    return 0;
}
