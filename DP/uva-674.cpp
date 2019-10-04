#include<bits/stdc++.h>
using namespace std;
#define M 7500

int coin[6]={1,5,10,25,50};
int dp[7][M];

void init(){
    for(int i=0;i<7;i++){
        for(int j=0;j<M;j++){
            dp[i][j]=-1;
        }
    }
}

int makeChange(int i,int amount,int make){
    if(i>=5){
        if(amount==0)
            return 1;
        else
            return 0;
    }

    if(dp[i][amount]!=-1)
        return dp[i][amount];
    int ret1=0,ret2=0;
    if(amount-coin[i]>=0){
        ret1= makeChange(i,amount-coin[i],make);
    }
    ret2=makeChange(i+1,amount,make);
    dp[i][amount]=ret1+ret2;
    return dp[i][amount];
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int c;
    init();
    while(scanf("%d",&c)!=EOF){
        cout<<makeChange(0,c,c)<<endl;
    }
    return 0;
}
