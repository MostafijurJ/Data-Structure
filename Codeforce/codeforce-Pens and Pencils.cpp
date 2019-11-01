#include<bits/stdc++.h>
using namespace std;

int clac(int x,int y){
    int sum=0;
    sum=x/y;
    if(x%y!=0)
        sum++;
    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int pen=clac(a,c);
        int pencil=clac(b,d);

        if(pen+pencil<=k){
            cout<<pen<<" "<<pencil<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
    return 0;
}
