#include<bits/stdc++.h>
#define MAX 100000
using namespace std;


int binarySearch(int A[],int low, int high, int key)
{
    if(low<high)
    {
        int mid= (low+high)/2;

        if(A[mid]==key) {
            return mid;
        }
        else if(A[mid]>key){
            return binarySearch(A,low,mid-1, key);
        }
        else {
            return binarySearch(A, mid+1, high, key);
        }
    }
    else return -1;

}


int main()
{
    int A[MAX];
    int N;
    int key;

    printf("Enter the size of the array: ");
    scanf("%d",&N);

    printf("Enter elements separated by whitespace: ");
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Enter key value to search: ");
    scanf("%d",&key);

    printf("%d\n", binarySearch(A,0,N,key));


    return 0;

}
