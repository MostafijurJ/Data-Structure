#include<bits/stdc++.h>
using namespace std;
#define M 150

int a[M][M],b[M][M],num1[M],num2[M];

void init(){
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            a[i][j]=0;
            b[i][j]=0;
        }
        num1[i]=0;
        num2[i]=0;
    }
}

void lcs(int n,int m){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(num1[i-1]==num2[j-1]){
                a[i][j]=a[i-1][j-1]+1;
                b[i][j]=1;
            }
            else if(a[i-1][j]>a[i][j-1]){
                a[i][j]=a[i-1][j];
                b[i][j]=2;
            }
            else{
                a[i][j]=a[i][j-1];
                b[i][j]=3;
            }
        }
    }
}

int main()
{
    int t=1;
    while(1){
        int n,m;
        cin>>n>>m;

        if(n==0 && m==0)
            break;

        for(int i=0;i<n;i++)
            cin>>num1[i];
        for(int i=0;i<m;i++)
            cin>>num2[i];


        lcs(n,m);

        cout<<"Twin Towers #"<<t++<<endl;
        cout<<"Number of Tiles : "<<a[n][m]<<endl;
        cout<<endl;
        init();
    }
    return 0;
}
