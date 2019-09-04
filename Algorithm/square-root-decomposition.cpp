#include<bits/stdc++.h>
using namespace std;

int block[20];
int a[100];
int blockSize=0;

void preprocess(int input[],int n){
    int blockId=-1;
    blockSize=sqrt(n);

    for(int i=0;i<n;i++){
        a[i]=input[i];
        if(i%blockSize==0){
            blockId++;
        }
        block[blockId]+=a[i];
    }
}

void Update(int id,int val){
    block[id/blockSize]+=val-a[id];
    a[id]=val;
}

int Query(int l,int r){
    int sum=0;

    while(l<r && l%blockSize!=0 && l!=0){
        sum+=a[l];
        l++;
    }

    while(l+blockSize<=r){
        sum+=block[l/blockSize];
        l+=blockSize;
    }

    while(l<=r){
        sum+=a[l];
        l++;
    }
    return sum;
}

int main()
{
    int input[100];
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>input[i];

    preprocess(input,n);

    cout<<Query(3,8)<<endl;
    cout<<Query(1,6)<<endl;
    Update(8,0);
    cout<<Query(8,8)<<endl;

    return 0;
}
