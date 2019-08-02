
/**
* Basic template
* Author : AshHasib
*/

#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

vector<int> least_primes(MAX+1, 0);

void findLeastPrimeFactors() {
    least_primes[1]=1;

    for(int i=2;i<=sqrt(MAX);i++) {
        if(least_primes[i]==0) {
            least_primes[i]= i;
            for(int j=i*2;j<=MAX;j+=i) {
                least_primes[j]=i;
            }
        }
    }
}

int main()
{
    int N;
    scanf("%d",&N);

    findLeastPrimeFactors();

    for(int i=1;i<=N;i++) {
        printf("For %d = %d\n", i, least_primes[i]);
    }


    return 0;
}

