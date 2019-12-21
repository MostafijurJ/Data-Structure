#include<bits/stdc++.h>
using namespace std;

double Area(int x1,int y1,int x2,int y2,int x3,int y3){
    return abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0);
}


int main()
{
    int x1,y1,x2,y2,x3,y3,x,y;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x>>y;

    double area=Area(x1,y1,x2,y2,x3,y3);
    double area1=Area(x,y,x2,y2,x3,y3);
    double area2=Area(x1,y1,x,y,x3,y3);
    double area3=Area(x1,y1,x2,y2,x,y);

    if(area==area1+area2+area3){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
