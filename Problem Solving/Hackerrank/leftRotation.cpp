#include<bits/stdc++.h>
using namespace std;


int main()
{
    int N,R;

    queue<int> Q;

    scanf("%d%d",&N, &R);

    int a;

    for(int i=0;i<N;i++)
    {
        scanf("%d",&a);

        Q.push(a);

    }

    for(int i=1;i<=R;i++)
    {
        int t= Q.front();
        Q.pop();
        Q.push(t);
    }

    for(int i=0;i<N;i++)
    {
        int t= Q.front();
        Q.pop();
        printf("%d ",t);
    }

    printf("\n");

    return 0;
}
