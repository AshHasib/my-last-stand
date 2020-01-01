#include<bits/stdc++.h>
using namespace std;

//right-left-up-down

int main() {

    freopen("input.txt", "r",stdin);

    int matrix[10][10];
    int dr[4]={-1,1,0,0};
    int dc[4]={0,0,1,-1};

    printf("Row - col: ");
    int row,col;
    bool visited[row][col];
    scanf("%d %d", &row, &col);

    printf("Matrix:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            scanf("%d", &matrix[i][j]);

        }
    }

    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++){ visited[i][j]=false;
        cout<<visited[i][j]<<endl;}
    }

    int sr,sc;
    printf("Source: ");
    scanf("%d %d", &sr, &sc);

    int er,ec;
    scanf("%d %d", &er, &ec);

    queue<int>qr;
    queue<int>qc;

    qr.push(sr);
    qc.push(sc);
    printf("%d %d - sr -sc\n",sr,sc);
    //visited[sr][sc]=true;
    int moves=0;
    bool reached_end=false;
    while(!qr.empty()) {
        int x=qr.front();qr.pop();
        int y=qc.front();qc.pop();

        //traverse
        for(int i=0;i<4;i++) {
            int rr=x+dr[i];
            int cc=y+dc[i];

            if(rr<0 || rr>=row || cc<0 || cc>=col) {
                printf("Out of bounds (%d, %d)\n", rr,cc);
                continue;
            }
            else if(visited[rr][cc]) {
                printf("Already visited (%d, %d)\n",rr,cc);
                continue;
            }
            else if(rr==er && cc==ec) {
                reached_end=true;
                break;
            }

            printf("Setting visited Status true for (%d,%d)\n",rr,cc);
            visited[rr][cc]=true;
            qr.push(rr);
            qc.push(cc);
        }
        moves++;
    }

    printf("Moves Needed: %d\n", moves);

    return 0;

}
