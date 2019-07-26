
#include<bits/stdc++.h>
#define MAX 1000000

using namespace std;

bool primes[MAX];


void init()
{
    for(int i=1;i<=MAX;i++)
    {
        primes[i]=true;
    }
}

void sieve()
{
    init();
    primes[1]=false;
    for(int i=2;i<=sqrt(MAX);i++)
    {
        if(primes[i])
        {
            for(int j=2*i;j<=MAX;j+=i)
            {
                primes[j]=false;
            }
        }
    }
}



int main()
{
    sieve();
    int N;
    printf("Enter number upto which you want to generate primes: ");
    scanf("%d",&N);


    for(int i=1;i<=N;i++)
    {
        if(primes[i])
        {
            printf("%d\n",i);
        }
    }

    return 0;

}
