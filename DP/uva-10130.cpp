#include<bits/stdc++.h>
using namespace std;
#define M 1010

int cost[M];
int weight[M];
int dp[M][M];

void init(){
    for(int i=0;i<110;i++){
        cost[i]=0;
    }

    for(int i=0;i<40;i++){
        weight[i]=0;
    }
}

void initialize(){
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
                dp[i][j]=-1;
            }
        }
}

int func(int i,int w,int c,int n){
    int profit1=0,profit2=0;

    if(i==n+1)
        return 0;

    if(dp[i][w]!=-1)
        return dp[i][w];

    if(w+weight[i]<=c){
        profit1=cost[i]+func(i+1,w+weight[i],c,n);
    }

    profit2=func(i+1,w,c,n);

    dp[i][w] = max(profit1,profit2);
    return dp[i][w];

}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int p,w,n;
        cin>>n;

        for(int i=1;i<=n;i++){
            cin>>cost[i]>>weight[i];
        }

        int g;
        int sum=0;
        cin>>g;
        for(int i=0;i<g;i++){
            initialize();
            int c;
            cin>>c;
            sum+=func(1,0,c,n);
        }

        cout<<sum<<endl;
        //init();

    }
    return 0;
}
