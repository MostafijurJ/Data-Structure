#include<bits/stdc++.h>
using namespace std;

bool check(string s1,string s2,int i,int j){
    char tmp=s1[i];
    s1[i]=s1[j];
    s1[j]=tmp;
    //cout<<s1<<endl;

    if(s1<s2){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;

        int sz=s1.size();
        int x=0;
        int y=0;
        bool flag=false;
        int ck=0;

        if(s1<s2){
            cout<<s1<<endl;
        }
        else{
                for(int i=0;i<sz;i++){
                for(int j=i+1;j<sz;j++){
                    if((s1[i]!=s1[j]) && check(s1,s2,i,j)){
                        flag=true;
                        x=i;
                        y=j;
                        //cout<<"ok"<<endl;
                        ck=1;
                        break;
                    }
                }
                if(ck){
                    break;
                }
            }

            if(flag==true){
                char tmp=s1[x];
                s1[x]=s1[y];
                s1[y]=tmp;
                cout<<s1<<endl;
                //cout<<i<<" "<<j<<endl;
            }
            else{
                cout<<"---"<<endl;
            }
        }

    }
    return 0;
}
