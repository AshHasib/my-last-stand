#include<bits/stdc++.h>
using namespace std;

int MAX = 100;
const int NUM_COINS = 4;


int makeChangeDp(int coins[], int cache, int amount) {

    for (int a=1;a<=amount;a++) {
        int minCoins = INT_MAX;

        for (int c=0;c<NUM_COINS;c++) {
            if(a-coins[c]>=0) {
                int curCoins = cache[a-coins[c]]+1;
                if (curCoins < minCoins) {
                    minCoins=curCoins;
                }
            }
        }
        cache[a]=minCoins;
    }
}

int main() {
    int cache[MAX+1];
    int coins[NUM_COINS]={25,10,5,1};

    printf("Change for %d = %d\n", 31, makeChangeDp(coins, cache,31));

    return 0;
}

