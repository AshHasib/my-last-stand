
/**
* Basic template
* Author : AshHasib
*/

#include<bits/stdc++.h>
#define MAX 5001
using namespace std;

vector<string>fibs(MAX, "0");


string add(string a, string b) {

    if(a.size()>b.size()) {
        swap(a,b);
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int n1= a.size();
    int n2= b.size();

    int carry=0;
    string res="";
    int sum;

    for(int i=0;i<n1;i++)
    {
        sum= (a[i]-'0') + (b[i]-'0')+carry;
        res+= (sum%10)+'0';
        carry= sum/10;
    }

    for(int i=n1;i<n2;i++)
    {
        sum= (b[i]-'0') + carry;
        res+= (sum%10) + '0';
        carry= sum/10;
    }
    if(carry) {
        res+= carry+ '0';
    }

    reverse(res.begin(), res.end());
    return res;
}

void calculateFib() {
    fibs[1]= "1";
    fibs[2]= "1";

    for(int i=3;i<=5000;i++) {
        fibs[i]= add(fibs[i-1], fibs[i-2]);
    }
}

int main()
{
    int num;

    clock_t beg = clock();
    calculateFib();
    clock_t en = clock();

    double time_spent = (double)(en - beg) / CLOCKS_PER_SEC;
    printf("%lf\n", time_spent);
    while(scanf("%d", &num)) {
        printf("The Fibonacci number for %d is %s\n", num, fibs[num].c_str());
    }

    return 0;
}


