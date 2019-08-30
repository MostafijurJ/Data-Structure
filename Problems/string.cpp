#include<bits/stdc++.h>
using namespace std;

void print(string a[],int i){
    for(int j=0;j<i+1;j++){
        cout<<a[j]<<endl;
    }
}

int main()
{
    string s,s1;
    getline(cin,s);
    string a[100];
    stringstream ss(s);
    int i=0;
    while(ss>>s1){
        a[i]=s1;
        i++;
    }
    print(a,i+1);
    return 0;
}
