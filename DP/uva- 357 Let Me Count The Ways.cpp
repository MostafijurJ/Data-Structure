#include<bits/stdc++.h>
using namespace std;
#define M 30050

long long nways[M];
long long coins[6]={1,5,10,25,50};

void init(long long n){
    for(long long i=0;i<=n;i++){
        nways[i]=0;
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long n;
    while(scanf("%lld",&n)!=EOF){
        init(n);
        nways[0]=1;

        for(long long i=0;i<5;i++){
            for(long long j=coins[i],k=0;j<=n;j++,k++){
                nways[j]+=nways[k];
            }
        }

        if(nways[n]>1){
            //cout<<"There are "<<nways[n]<<" ways to produce "<<n<<" cents change."<<endl;
            printf("There are %lld ways to produce %lld cents change.\n",nways[n],n);
        }
        else{
            //cout<<"There is only "<<nways[n]<<" way to produce "<<n<<" cents change."<<endl;
            printf("There is only %lld way to produce %lld cents change.\n",nways[n],n);
        }

    }
    return 0;
}
