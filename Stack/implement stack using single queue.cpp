#include<bits/stdc++.h>
using namespace std;

queue<int>q;

void push(int x){
    int sz=q.size();
    q.push(x);

    for(int i=0;i<sz;i++){
        q.push(q.front());
        q.pop();
    }
}

void pop(){
    if(q.empty())
        cout<<"Underflow"<<endl;
    else{
        q.pop();
    }
}

void top(){
    if(q.empty()){
        cout<<"NULL"<<endl;
    }
    else{
        cout<<q.front()<<endl;
    }
}

int main()
{
    int n;
    while(1){
        cin>>n;
        if(n==1){
            int val;
            cin>>val;
            push(val);
        }
        else if(n==2){
            pop();
        }
        else{
            top();
        }
    }
    return 0;
}
