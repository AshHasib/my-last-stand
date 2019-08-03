
/**
* Basic template
* Author : AshHasib
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int N,M;

    scanf("%ld%ld",&N, &M);

    vector<long> V(N+1,0);
    long a,b,k;

    for(int i=0;i<M;i++) {
        scanf("%ld%ld%ld", &a, &b, &k);
        V[a]+=k;
        if(b+1<=N) V[b+1]-=k;
    }

    //applying kadane

    long int max_elem=0;
    long int x=0;
    for(int i=1;i<=N;i++) {
        x+=V[i];
        if(max_elem<x) {
            max_elem= x;
        }
    }

    printf("%ld\n", max_elem);


    return 0;
}

