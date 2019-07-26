#include<bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("input.txt","r", stdin);

    int maxSum=-63; //possible lowest sum 7*-9

    int A[6][6];

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }


    int curSum;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            int top= A[i][j]+ A[i][j+1] + A[i][j+2];
            int mid= A[i+1][j+1];
            int bottom= A[i+2][j]+ A[i+2][j+1]+ A[i+2][j+2];

            curSum= top+mid+bottom;

            //printf("Cursum: %d\n", curSum);
            if(curSum>maxSum)
            {
                maxSum= curSum;
            }
        }
    }

    printf("%d\n",maxSum);


    return 0;
}
