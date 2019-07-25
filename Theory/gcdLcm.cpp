#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}


int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}


int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    printf("GCD: %d\n",gcd(a,b));
    printf("LCM: %d\n",lcm(a,b));

}


