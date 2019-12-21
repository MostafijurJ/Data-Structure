#include<bits/stdc++.h>
using namespace std;

struct pr{
    long long x,y,cost;

    pr(long long _x,long long _y,long long _cost){
        x=_x;
        y=_y;
        cost=_cost;
    }

    pr(){}
};

pr a[200500];

int main()
{
    long long n,sx,sy;
    cin>>n>>sx>>sy;

    for(long long i=0;i<n;i++){
        long long px,py;
        long long ct=0;

        cin>>px>>py;
        ct=abs(sx-px)+abs(sy-py);

        a[i]=pr(px,py,ct);
    }

    long long dx=0,dy=0,mx=0;

    long long prev=0;

    for(long long i=0;i<n;i++){
        long long cost1=abs((sx-1)-a[i].x)+abs(sy-a[i].y);
        if(cost1<=a[i].cost){
            prev++;
        }
    }

    if(prev>mx){
        mx=prev;
        dx=sx-1;
        dy=sy;
    }

    prev=0;
    for(long long i=0;i<n;i++){
        long long cost1=abs((sx)-a[i].x)+abs((sy-1)-a[i].y);
        if(cost1<=a[i].cost){
            prev++;
        }
    }

    if(prev>mx){
        mx=prev;
        dx=sx;
        dy=sy-1;
    }

    prev=0;
    for(long long i=0;i<n;i++){
        long long cost1=abs((sx+1)-a[i].x)+abs((sy)-a[i].y);
        if(cost1<=a[i].cost){
            prev++;
        }
    }

    if(prev>mx){
        mx=prev;
        dx=sx+1;
        dy=sy;
    }

    prev=0;
    for(long long i=0;i<n;i++){
        long long cost1=abs((sx)-a[i].x)+abs((sy+1)-a[i].y);
        if(cost1<=a[i].cost){
            prev++;
        }
    }

    if(prev>mx){
        mx=prev;
        dx=sx;
        dy=sy+1;
    }

    cout<<mx<<endl;
    cout<<dx<<" "<<dy<<endl;

    return 0;
}
