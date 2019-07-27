#include<bits/stdc++.h>
using namespace std;


void selectionSort(int A[], int N)
{

    for(int i=0;i<N;i++)
    {
        int minInd= i;
        for(int j=i+1;j<N;j++)
        {
            if(A[j]<A[minInd])
            {
                minInd= j;
            }
        }

        int temp= A[minInd];
        A[minInd]= A[i];
        A[i]= temp;
    }
}


int main()
{
    int N;
    printf("Enter the size of the array:");
    scanf("%d",&N);

    int A[N];

    printf("Enter elements:");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }

    selectionSort(A,N);

    printf("Sorted elements:");
    for(int i=0;i<N;i++)
    {
        printf("%d\t",A[i]);
    }

    printf("\n");

    return 0;
}
