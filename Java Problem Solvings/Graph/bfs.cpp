#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>G[], int nodes, int source) {
    queue<int> Q;
    int visited[nodes+1];
    int distance[nodes+1];
    for(int i=1;i<=nodes;i++) {
        visited[i]=false;
        distance[i]=0;
    }
    visited[source]=true;
    distance[source]=0;
    Q.push(source);

    while(!Q.empty()){
        int u=Q.front();
        Q.pop();

        for(int j=0;j<G[u].size();j++) {
            int v=G[u][j];
            if(!visited[v]) {
                visited[v]=true;
                distance[v]=distance[u]+1;
                Q.push(v);
            }
        }
    }

    for(int i=1;i<=nodes;i++) {
        printf("%d to %d = %d\n", source,i, distance[i]);
    }
}



int main() {
    vector<int>G[100];
    int nodes,edges;
    int a,b;
    int startNode=1;
    scanf("%d %d", &nodes, &edges);

    for(int i=1;i<=edges;i++) {
        scanf("%d %d", &a, &b);
        //assuming a one-directional graph
        G[a].push_back(b);
    }

    bfs(G,nodes,startNode);


}



