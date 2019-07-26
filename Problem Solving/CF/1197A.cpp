#include<bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("input.txt", "r", stdin);

    int T;

    scanf("%d",&T);

    for(int c=1;c<=T;c++)
    {
        int N, M=0,M2=0,a;

        scanf("%d",&N);

        for(int i=0;i<N;i++)
        {
            scanf("%d",&a);

            if(a>=M)
            {
                M2=M;
                M=a;
            }
            else if(a<M && a>=M2)
            {
                M2=a;
            }

        }

        //printf("%d\t%d\t",M,M2);

        printf("%d\n", ((M2-1)<(N-2)?(M2-1):(N-2)));

    }

    return 0;
}
