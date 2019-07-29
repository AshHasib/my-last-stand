#include<bits/stdc++.h>
using namespace std;



int main()
{
    int N;
    scanf("%d",&N);

    while(N%2==0)
    {
        printf("2\n");
        N/=2;
    }

    for(int i=3;i<=sqrt(N);i++)
    {
        if(N%i==0) {
            printf("%d\n",N/i);
            N/=i;
        }
    }

    if(N>2) {
        printf("%d\n", N);
    }

    return 0;
}
