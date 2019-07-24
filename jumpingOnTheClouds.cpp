#include<bits/stdc++.h>

using namespace std;


int main()
{
    int N;

    scanf("%d",&N);
    vector<int>V;

    int nJumps=0;
    int a;
    for(int i=0; i<N; i++)
    {
        scanf("%d",&a);
        V.push_back(a);
    }

    int i=0;

    while(i<N-1)
    {
        if(V[i+2]==0)
        {
            i=i+2;
            nJumps++;
        }
        else if(V[i+2]==1 && V[i+1]==0)
        {
            nJumps++;
            i++;
        }
    }

    printf("%d\n",nJumps);

    return 0;

}
