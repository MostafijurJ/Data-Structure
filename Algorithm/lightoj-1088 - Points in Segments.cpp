#include<bits/stdc++.h>
using namespace std;
#define M 100010

int a[M];
int n;

int lowerBound(int key){
    int l=0;
    int h=n-1;

    while(l<=h){
        int mid=(l+h)/2;

        if(key==a[mid]){
            return mid;
            if(key==a[mid-1])
                h=mid-1;
        }
        else if(key>a[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }

    return l;
}

int upperBound(int key){
    int l=0;
    int h=n-1;

    while(l<=h){
        int mid=(l+h)/2;

        if(key==a[mid]){
            return mid;
            if(key==a[mid+1])
                l=mid+1;
        }
        else if(key>a[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }

    return h;
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
        printf("Case %d:\n",k);
        int q;
        scanf("%d%d",&n,&q);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<q;i++){
            int sp,ep;
            scanf("%d%d",&sp,&ep);

            int l=lowerBound(sp);
            int r=upperBound(ep);

            printf("%d\n",(r-l)+1);
        }

    }
    return 0;
}
