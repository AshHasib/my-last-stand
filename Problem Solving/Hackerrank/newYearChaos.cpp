#include<bits/stdc++.h>

using namespace std;


int main()
{
    freopen("input.txt", "r", stdin);


    int T;
    scanf("%d",&T);

    int N;

    for(int c=1;c<=T;c++)
    {
        scanf("%d",&N);

        int A[N+1];

        for(int i=1;i<=N;i++)
        {
            scanf("%d",&A[i]);
        }

        int numMovesTotal=0;
        bool flag=true;
        int i=N;
        while(i>=1)
        {
            if(i!=A[i])
            {
                if(i==A[i-1])
                {


                    int t= A[i];
                    A[i]=A[i-1];
                    A[i-1]=t;
                    numMovesTotal++;

                }
                else if(i==A[i-2])
                {

                    int t=A[i-2];
                    A[i-2]=A[i-1];
                    A[i-1]=t;

                    t=A[i-1];
                    A[i-1]=A[i];
                    A[i]=t;

                    numMovesTotal+=2;

                }
                else {

                    flag=false;
                    break;
                }
            }
            i-=1;

        }

        if(flag==false)
        {
            printf("Too chaotic\n");
        }
        else printf("%d\n", numMovesTotal);


    }
}
