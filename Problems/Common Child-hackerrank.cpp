#include<bits/stdc++.h>
using namespace std;
#define M 5010

int node[M][M];

int lcs(string s,string s1){
    int n=s.size();
    int m=s1.size();

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==s1[j-1]){
                node[i][j]=node[i-1][j-1]+1;
            }
            else{
                node[i][j]=max(node[i-1][j],node[i][j-1]);
            }
        }
    }

    return node[n][m];
}

int main()
{
    string s,s1;
    cin>>s>>s1;

    cout<<lcs(s,s1)<<endl;

    return 0;
}
