/*

 used 1 for diagonal,
 2 for up and
 3 for backward or left

*/


#include<bits/stdc++.h>
using namespace std;
#define M 20

int a[M][M],b[M][M];
string s1,s2;

void print(int i,int j){
    if(i==0 || j==0)
        return;

    if(b[i][j]==1){
        print(i-1,j-1);
        cout<<s1[i-1];
    }
    else if(b[i][j]==2)
        print(i-1,j);
    else
        print(i,j-1);
}

void lcs(){
    int n=s1.size();
    int m=s2.size();

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
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
    cin>>s1;
    cin>>s2;
    lcs();
    print(s1.size(),s2.size());
    return 0;
}
