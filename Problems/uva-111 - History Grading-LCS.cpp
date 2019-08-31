#include<bits/stdc++.h>
using namespace std;
#define M 25

int a[M][M],org[M],tmp[M];

void init(){
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            a[i][j]=0;
        }
        tmp[i]=0;
    }

}

void lcs(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(org[i-1]==tmp[j-1]){
                a[i][j]=a[i-1][j-1]+1;
            }
            else
                a[i][j]=max(a[i-1][j],a[i][j-1]);
        }
    }
}

int main()
{
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        org[--m]=i;
    }
    while(scanf("%d",&m)==1){
        tmp[m]=0;
        for(int i=1;i<n;i++){
            scanf("%d",&m);
            tmp[--m]=i;
        }
        lcs(n);
        cout<<a[n][n]<<endl;
        init();
    }
    return 0;
}
