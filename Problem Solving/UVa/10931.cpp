#include<bits/stdc++.h>
using namespace std;



int main()
{
    //freopen("input.txt", "r", stdin);
    long N;

    while(1)
    {
        scanf("%ld", &N);
        if(N==0) return 0;
        string bin="";
        int counter=0;
        while(N>0) {

            if(N%2!=0) {
                bin+="1";
                N/=2;
                counter++;
            }

            else {
                bin+="0";
                N/=2;
            }

        }

        reverse(bin.begin(), bin.end());
        printf("The parity of %s is %d (mod 2).\n", bin.c_str(), counter);
        //printf("%s\n", bin.c_str());

    }

    return 0;
}
