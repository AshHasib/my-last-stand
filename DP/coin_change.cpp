#include<bits/stdc++.h>
using namespace std;

int coins[100];
int dp[100][100];
int make;

vector<int> result;

int call(int i, int amount, int N) {
    int ret1=0, ret2=0;

    if(i>=N) {
        if(amount==make) {
            return 1;
        } else {
            return 0;
        }
    }

    if(dp[i][amount]!=-1) {
        return dp[i][amount];
    }

    if(amount+coins[i]<=make) {
        ret1 = call(i,amount+coins[i], N);
    }

    ret2= call(i+1,amount, N);

    return dp[i][amount]=ret1|ret2;
}

int main() {

    memset(dp, -1, sizeof dp);
    int N;
    printf("Num. Coins: ");
    scanf("%d", &N);
    printf("Enter coins: ");
    for(int i=0;i<N;i++) {
        scanf("%d",&coins[i]);
    }

    printf("Make: ");
    scanf("%d",&make);

    printf("Make status: %d\n", call(0,0,N));


    return 0;
}

