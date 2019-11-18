#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3,s4;
    s1="I hate it ";
    s2="I love it ";
    s3="I hate that ";
    s4="I love that ";

    int n;
    cin>>n;


    for(int i=1;i<=n;i++){
        if(i<n){
            if(i%2==0){
                cout<<s4;
            }
            else{
                cout<<s3;
            }
        }
        else{
            if(i%2==0){
                cout<<s2;
            }
            else{
                cout<<s1;
            }
        }
    }

    cout<<endl;
    return 0;
}
