#include<bits/stdc++.h>
using namespace std;

int main()
{

    string digits;

    while(1) {

        cin>>digits;

        if(digits=="0") return 0;

        int num=0;
        int i=0;

        reverse(digits.begin(), digits.end());

        int sz=digits.size();

        for(int j= 0; j< sz; j++) {
            num+= (digits[j]-'0') * (pow(2,j+1)-1);
        }

        printf("%d\n", num);
    }

    return 0;
}
