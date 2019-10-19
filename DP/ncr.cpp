#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int ncr(int n, int r) {
    if(n==r) return 1;
    else if (r==1) return n;
    else if (dp[n][r] != -1) return dp[n][r];

    else return dp[n][r]=ncr(n-1, r-1) + ncr(n-1, r);
}

int main() {
    memset(dp, -1, sizeof dp);

    printf("%dC%d  is = %d\n",5,2,ncr(5,2));

    return 0;
}
