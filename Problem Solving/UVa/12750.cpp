#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    scanf("%d",&T);

    for (int c=1;c<=T;c++)
    {
        int N;
        scanf("%d",&N);
        char ch;
        char S[501];
        int mainCounter=0;
        int counter=0;

        for(int i=0;i<N;i++)
        {
            fflush(stdin);

            scanf("%c", &ch);
            //fflush(stdin);
            S[i]=ch;

        }

        for(int i=0;i<N;i++)
        {
            mainCounter++;
            printf("%c", S[i]);
            if(S[i]=='L' || S[i]=='D') {
                counter++;
                if(counter==3) {
                    break;
                }
            }

            else {
                counter=0;
            }


        }

        if(counter==3) {
            printf("Case %d: %d\n",c,mainCounter);
        }
        else
        {
            printf("Case %d: Yay! Mighty Rafa persists!",c);
        }
    }

    return 0;
}
