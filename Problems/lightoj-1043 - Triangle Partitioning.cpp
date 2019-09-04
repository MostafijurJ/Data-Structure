#include<bits/stdc++.h>
using namespace std;

double ad,de,ae;
double a,b,c,bArea;

void init(double d){
    ad=d;
    de=(ad*b)/a;
    ae=(ad*c)/a;
}

double getArea(double x,double y,double z){
    double p=(x+y+z)/2.0;
    double s=p*(p-x)*(p-y)*(p-z);
    double area=pow(s,.5);
    return area;
}

double getRatio(){
    double sArea=getArea(ad,de,ae);
    double tArea=abs(bArea-sArea);

    return sArea/tArea;
}

double binarySearch(double l,double h,double r){
    double mid=0,ans=0;
    double r1;
    int term = 50;
    while(term--){
        mid=(l+h)/2;
        init(mid);
        r1=getRatio();
        //cout<<r<<" "<<r1<<endl;
        if(abs(r1-r)<=.0000001)
            ans = mid;
        if(r1>r)
            h=mid;
        else
            l=mid;
    }

    return ans;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        double r;
        scanf("%lf%lf%lf%lf",&a,&b,&c,&r);

        bArea=getArea(a,b,c);
        printf("Case %d: %.6f\n",i+1,binarySearch(0.5,a,r));
    }
    return 0;
}
