#include<bits/stdc++.h>
using namespace std;

void printArray(int A[] , int N)
{
    for(int i=1;i<=N;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");
}


int main()
{
    int N;
    scanf("%d",&N);
    int A[N];


    for(int i=1;i<=N;i++)
    {
        scanf("%d",&A[i]);
    }

    for(int j=2;j<=N;j++)
    {
        int key=A[j];
        int i=j-1;

        while((i>0) && (A[i]>key))
        {
            A[i+1]=A[i];
            i--;

        }
        A[i+1]=key;
        printf("State of the array:");
        printArray(A,N);
    }

    printf("The sorted array: ");
    printArray(A,N);

    return 0;

}




