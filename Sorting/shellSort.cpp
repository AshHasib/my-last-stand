#include<bits/stdc++.h>
using namespace std;


void shellSort(int A[], int N)
{
    for(int gap=N/2;gap>0;gap/=2) //gap assigned to half of each part every time
    {
        printf("GAP = %d\n\n",gap);
        for(int i= gap; i<N;i++) //going to the right
        {
            printf("I = %d\n",i);
            int temp= A[i];

            int j=i;
            while(j>=gap && A[j-gap]>temp)
            {
                printf("INSIDE LOOP J = %d\n\n", j);
                A[j]=A[j-gap];
                j-=gap;
            }

            printf("NOW THE VALUE OF A[j] = %d\n", A[j]);
            A[j]=temp;
        }
    }
}


int main()
{
    int N;
    printf("Enter the size of array:");
    scanf("%d",&N);

    int A[N];

    printf("Enter elements:");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }


    shellSort(A,N);

    printf("Sorted elements:");
    for(int i=0;i<N;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");

    return 0;
}
