
#include<bits/stdc++.h>
using namespace std;


int fib[100];

int calcfib(int n) {
    if(n<=1) return 1;
    else if (fib[n]!=-1) return fib[n];

    else return fib[n]=calcfib(n-1)+calcfib(n-2);
}

int main()
 {
    memset(fib, -1, sizeof fib);
    for(int i=1;i<=10;i++) {
        printf("%d\n", calcfib(i));
    }

    return 0;
 }
