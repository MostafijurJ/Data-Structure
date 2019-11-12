#include<bits/stdc++.h>
using namespace std;

int cell[6][6];
int dist[6][6];
int fx[]={-1,0,0,1};
int fy[]={0,-1,1,0};

struct pr{
    int x,y;
    pr(int _x,int _y){
        x=_x;
        y=_y;
    }
    pr(){}
};

void init(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            dist[i][j]=INT_MAX;
        }
    }
}

bool valid(int x,int y){
    if(x>=0 && x<5 && y>=0 && y<5){
        return true;
    }
    return false;
}

void bfs(int sx,int sy){
    dist[sx][sy]=0;
    queue<pr>q;
    q.push(pr(sx,sy));
    while(!q.empty()){
        pr tp=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int tx=tp.x+fx[i];
            int ty=tp.y+fy[i];

            if(valid(tx,ty) && dist[tp.x][tp.y]+1<dist[tx][ty]){
                dist[tx][ty]=dist[tp.x][tp.y]+1;
                q.push(pr(tx,ty));
            }
        }
    }
}

int main()
{
    init();
    int sx,sy;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>cell[i][j];
            if(cell[i][j]==1){
                sx=i;
                sy=j;
            }
        }
    }
    bfs(sx,sy);
    cout<<dist[2][2]<<endl;

    return 0;
}
