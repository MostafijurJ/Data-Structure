#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;
    stack<int>mx;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;

        if(q==1){
            int x;
            cin>>x;

            st.push(x);

            if(mx.empty()){
                mx.push(x);
            }else{
                if(x>mx.top()){
                    mx.push(x);
                }
                else{
                    mx.push(mx.top());
                }
            }
        }

        else if(q==2){
            st.pop();
            mx.pop();
        }

        else{
            cout<<mx.top()<<endl;
        }
    }
    return 0;
}
