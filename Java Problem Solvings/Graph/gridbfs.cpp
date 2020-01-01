#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int grid[MAX][MAX];

int dirx[4]={1,0,0,0};
int diry[4]={0,0,-1,1};


bool isValid(int rr,int cc, int row,int col) {

    if(rr<0 || cc<0 || rr>=row || cc>=col) return false;
    else if(grid[rr][cc]==0) return false;
    return true;
}

int bfs(int sr,int sc, int er, int ec, int row, int col) {
    printf("BFS Started");
    int distance[row][col];

    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            distance[i][j]=-1;
        }
    }

    queue<int> qr, qc;
    distance[sc][sc]=0;
    qr.push(sr);
    qc.push(sc);

    while(!qr.empty()) {
        int x=qr.front();
        int y=qc.front();
        qr.pop();qc.pop();

        for(int i=0;i<4;i++) {
            int rr=x+dirx[i];
            int cc=y+diry[i];

            if(isValid(rr,cc,row,col) && distance[rr][cc]==-1) {
                distance[rr][cc]=distance[x][y]+1;
                qr.push(rr);
                qc.push(cc);
            }
        }
    }
    return distance[er][ec];
}


int main() {

    freopen("input.txt", "r", stdin);
    int row, col, sr,sc,er,ec;
    int dr,dc;

    printf("Row-Col:");
    scanf("%d %d",&row, &col);

    printf("GRID:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            scanf("%d",&grid[i][j]);
        }
    }

    printf("Source:");
    scanf("%d %d",&sr,&sc);

    printf("Destination:");
    scanf("%d %d",&er, &ec);

    printf("Shortest distance from (%d,%d) to (%d,%d) = %d\n", sr,sc,er,ec, bfs(sr,sc,er,ec,row,col));


    return 0;


}
