#include<bits/stdc++.h>
using namespace std;


int main()
{

    int T;
    scanf("%d",&T);

    for(int c=1; c<=T; c++) {
        int N;
        scanf("%d", &N);
        //int A[N];

        int cHigh=0, cLow=0;
        int a;
        int temp;
        for(int i=0;i<N;i++) {
            scanf("%d",&a);
            if(i>0) {
                if(temp>a) {
                    cLow++;
                }
                else if(temp<a) {
                    cHigh++;
                }
            }
            temp=a;
        }
        printf("Case %d: %d %d\n", c, cHigh, cLow);
    }

    return 0;
}
