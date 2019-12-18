#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int mn=INT_MAX;
        for(int i=-1;i<2;i++){
            for(int j=-1;j<2;j++){
                for(int k=-1;k<2;k++){
                    int fa=a+i;
                    int fb=b+j;
                    int fc=c+k;

                    mn=min(mn,abs(fa-fb)+abs(fa-fc)+abs(fb-fc));
                }
            }
        }

        cout<<mn<<endl;
    }

    return 0;
}
