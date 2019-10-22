
#include<bits/stdc++.h>
using namespace std;

int NUM_COINS = 4;
int *coins= new int[NUM_COINS];
int totalCalls = 0;
int dp[100];


int makeChange(int amount) {
    printf("Change for = %d\n", amount);
    totalCalls++;

    if (amount==0) return 0;
    else if (dp[amount]!=-1) return dp[amount]; //no need to calculate
    int minCoins = INT_MAX;

    for (int c=0;c<NUM_COINS;c++) {
        if(amount-coins[c]>=0) {

            int curCoins = makeChange(amount-coins[c]);
            //printf("CurCoins = %d\n", curCoins);
            if(curCoins<minCoins) {
                minCoins = curCoins;
                dp[c]=minCoins+1;
                //printf("Min Coins = %d\n", minCoins);
            }
        }
    }
    return minCoins+1;
}


int main() {
    int amount = 31;
    coins[0]=25;
    coins[1]=10;
    coins[2]=5;
    coins[3]=1;

    memset(dp, -1, sizeof dp);


    printf("Make Change for %d = %d\n", amount, makeChange(amount));
    printf("Total Calls = %d\n", totalCalls);
    return 0;
}
