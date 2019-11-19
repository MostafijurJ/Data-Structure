#include<bits/stdc++.h>
using namespace std;

double a[105];

int main()
{
    double n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    double sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i]/100;
    }

    cout<<(sum/n)*100<<endl;

    return 0;
}
