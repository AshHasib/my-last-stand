/**
* Calculating the sum of divisors from 1 to N
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    scanf("%d",&N);

    int sum=0;
    for(int i=1;i<=N;i++)
    {
        sum+=(N/i)* i;
    }

    printf("%d",sum);

    return 0;
}
