
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int N;
    scanf("%d",&N);

    int sum=0;

    printf("Divisors: ");
    for(int i=1;i<=sqrt(N);i++)
    {
        if(N%i==0)
        {
            if(i*i==N)
            {
                printf("%d\t",i);
                sum+=i;
            }
            else
            {
                printf("%d\t",i);
                printf("%d\t",N/i);

                sum+=i;
                sum+=N/i;
            }
        }
    }

    printf("\nSum: %d\n",sum);



    return 0;
}
