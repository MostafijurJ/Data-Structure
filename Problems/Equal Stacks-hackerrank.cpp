#include<bits/stdc++.h>
using namespace std;
#define M 100010

stack<int>q1;
stack<int>q2;
stack<int>q3;

vector<int>v1;
vector<int>v2;
vector<int>v3;

void initialize(){
    for(int i=v1.size()-1;i>=0;i--){
        if(q1.empty()){
            q1.push(v1[i]);
        }
        else{
            q1.push(q1.top()+v1[i]);
        }
    }

    for(int i=v2.size()-1;i>=0;i--){
        if(q2.empty()){
            q2.push(v2[i]);
        }
        else{
            q2.push(q2.top()+v2[i]);
        }
    }

    for(int i=v3.size()-1;i>=0;i--){
        if(q3.empty()){
            q3.push(v3[i]);
        }
        else{
            q3.push(q3.top()+v3[i]);
        }
    }
}

int maxHeight(){
    if(q1.empty() || q2.empty() || q3.empty()){
        return 0;
    }

    int mn=INT_MAX;

    while(!q1.empty() && !q2.empty() && !q3.empty()){
        int top1=q1.top();
        int top2=q2.top();
        int top3=q3.top();

        if(top1==top2 && top2==top3)
            return top1;

        mn=min(mn,top1);
        mn=min(mn,top2);
        mn=min(mn,top3);

        if(mn<top1)
            q1.pop();
        if(mn<top2)
            q2.pop();
        if(mn<top3)
            q3.pop();
    }
    return 0;
}

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }

    for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }

    for(int i=0;i<n3;i++){
        int x;
        cin>>x;
        v3.push_back(x);
    }

    initialize();
    cout<<maxHeight()<<endl;

    return 0;
}
