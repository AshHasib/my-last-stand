
/**
* Basic template
* Author : AshHasib
*/

#include<bits/stdc++.h>
using namespace std;



int main()
{
    freopen("input.txt", "r", stdin);
    long long N;
    while(scanf("%lld",&N) && N!=0) {

        long long M=N;
        if(N<0)
        {
            N=-N;
            printf("%lld=  -1 x ",M);
            while(N%2==0)
            {
                printf("2 x ");
                N/=2;
            }

            for(int i=3;i<=sqrt(N);i+=2) {
                if(N%i==0)
                {
                    printf("%lld x ",i);
                    N/=i;
                }
            }
            if(N>2) {
                printf("%lld",N);
            }
        }
        else {
            printf("%lld= ", M);
            while(N%2==0)
            {
                printf("2 x ");
                N/=2;
            }

            for(long long i=3;i<=sqrt(N);i+=2) {
                if(N%i==0)
                {
                    printf("%lld x ",i);
                    N/=i;
                }
            }
            if(N>2) {
                printf("%lld",N);
            }
        }

        printf("\n");

    }
    return 0;
}
