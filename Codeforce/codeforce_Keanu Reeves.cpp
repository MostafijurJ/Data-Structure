#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    string s;
    cin>>s;
    int a=0;
    int b=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
            a++;
        else
            b++;
    }
    if( a!= b)
    {
        cout<<1<<"\n"<<s ;
        return 0 ;
    }
    else
    {
        a = 0, b = 0 ;
        cout<<"2"<<endl;
        for(int i=0; i<s.size(); i++)
        {
            a += (s[ i ] == '0') ;
            b += (s[ i ] != '0') ;
            if( a != b ){
                cout<<s.substr( 0, i+1 )<<" "<<s.substr( 1, s.size() ) ;
                return 0 ;
            }
        }
        cout<<endl;
    }
    return 0;
}
