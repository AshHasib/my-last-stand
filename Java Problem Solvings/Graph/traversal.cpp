
#include<bits/stdc++.h>
using namespace std;

int main() {
    int nodes;
    int edges;
    vector<int>G[100];
    printf("Enter the number of nodes:");
    scanf("%d", &nodes);

    printf("Enter the number of edges:");
    scanf("%d",&edges);

    int a,b;
    printf("Enter edges:");
    for(int i=1;i<=edges;i++) {
        scanf("%d %d",&a,&b);
        G[a].push_back(b);
        G[b].push_back(a);
    }

    printf("Traversing the graph:\n");

    for(int i=1;i<=nodes;i++) {
        for(int j=0;j<G[i].size();j++) {
            printf("%d - %d\n", i, G[i][j]);
        }
        printf("\n");
    }
    return 0;
}
