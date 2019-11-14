#include<bits/stdc++.h>
using namespace std;

bool mark[10];

void init(){
    for(int i=0;i<10;i++){
        mark[i]=false;
    }
}

bool valid(int n){
    init();
    while(n!=0){
        if(mark[n%10]){
            return false;
        }
        mark[n%10]=true;
        n=n/10;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    n+=1;
    while(1){
        if(valid(n)){
            cout<<n<<endl;
            break;
        }
        n++;
    }

    return 0;
}
