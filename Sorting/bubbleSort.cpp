
#include<bits/stdc++.h>
using namespace std;



void Swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void bubbleSort(int A[], int N)
{
    for(int j=N-1; j>=1;j--)
    {
        for(int i=0;i<j;i++)
        {
            if(A[i]>A[i+1])
            {
                //Swap(A[i], A[i+1]);
                A[i]=A[i]+A[i+1];
                A[i+1]=A[i]-A[i+1];
                A[i]=A[i]-A[i+1];
            }
        }
    }
}

int main()
{
    int N;

    printf("Enter the size of the array: ");
    scanf("%d",&N);

    int A[N];

    printf("Enter elements: ");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }

    bubbleSort(A,N);

    printf("After sorting, the elements:\n");

    for(int i=0;i<N;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");

    return 0;

}
