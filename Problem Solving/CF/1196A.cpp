#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    int a,b,c;
    scanf("%d",&T);

    while(T--){

        scanf("%d %d %d",&a, &b, &c);
        double d= (a+b+c)/2;
        printf("%d\n",(int)floor(d));

    }

    return 0;
}
