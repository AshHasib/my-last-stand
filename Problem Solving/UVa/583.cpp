
/**
* Basic template
* Author : AshHasib
*/

#include<bits/stdc++.h>
using namespace std;



int main()
{
    //freopen("input.txt", "r", stdin);



    long long N;
    while(scanf("%lld",&N) && N!=0) {
        bool flag=false;

        if(N<0)
        {
            flag=true;
            printf("%lld = -1",N);
            N=-N;
        }
        else {
            printf("%lld = ", N);
        }

        while(N%2==0) {
            if(flag==false) {
                printf("2");
            }
            else printf(" x 2");
            N/=2;

            flag=true;
        }

        for(long long i=3;i<=sqrt(N);i+=2) {
            while(N%i==0) {
                if(flag==false) printf("%lld",i);
                else printf(" x %lld", i);
                N/=i;
                flag=true;
            }
        }

        if(N>2) {
            if (flag==false) printf("%lld", N);
            else printf(" x %lld",N);
        }

        printf("\n");
        //flag=false;
    }
    return 0;
}
