#include<bits/stdc++.h>

using namespace std;

int minSwaps(int A[], int t[], int N) {

    //int t[N+1];
    int counter=0;

    for(int i=1;i<N;i++)
    {
        if(A[i]!= i) {
            int temp = A[i];
            A[i]= A[t[i]];
            A[t[i]]= temp;
            counter++;
        }
    }
    return counter;
}

int main() {
    int N;
    scanf("%d",&N);

    int A[N+1];
    int t[N+1];
    for(int i=1;i<=N;i++) {
        scanf("%d",&A[i]);
        t[A[i]]=i;
    }

    printf("%d\n", minSwaps(A,t,N));

}
