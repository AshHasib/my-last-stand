

public class CoinChangeDp {

    static int []coins = new int[]{10,6,1};
    public static void main(String [] args) {

        System.out.printf("Making change for %d = %d", 17, makeChange(17));
    }


    public static int makeChange(int amount) {
        int cache[] = new int[amount+1];

        for (int a=1;a<=amount;a++) {
            int minCoins = 99999;

            for(int coin : coins) {
                if(a-coin>=0) {
                    int curCoins = cache[a-coin]+1;
                    if(curCoins<minCoins) {
                        minCoins = curCoins;
                    }
                }
            }
            cache[a]=minCoins;
        }
        return cache[amount];
    }

}