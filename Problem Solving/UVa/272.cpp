
#include<bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("input.txt", "r", stdin);

    char S[100000];

    while(gets(S)) {

        long sz= strlen(S);
        long p=0;
        //int c1=0,c2=0;

        for(long i=0;i<sz;i++) {

            if(S[i]=='"') {
                p++;
                if(p%2==1)
                {
                    printf("``");
                }
                else
                {
                    printf("''");

                }
            }
            else {
                printf("%c", S[i]);
            }
        }


        printf("\n");
    }
    return 0;
}
