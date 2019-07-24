#include<bits/stdc++.h>
using namespace std;


int main()
{
    int N, counter=0;
    scanf("%d",&N);

    set<int>S;
    int a;

    for(int i=0;i<N;i++)
    {
        scanf("%d",&a);

        if(S.find(a)!=S.end()) {
            counter++;
            S.erase(a);
        }
        else {
            S.insert(a);
        }

    }

    printf("%d\n",counter);

    return 0;
}
