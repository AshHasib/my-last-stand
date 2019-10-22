#include<bits/stdc++.h>
using namespace std;

int main()
{
    char S[100000];
    scanf(" %[^\n]", &S);
    //printf("%s\n", &S);
    int len = strlen(S);
    bool flag = true;
    sort(S,S+len);

    for (int i=0;i<len-1;i++) {
        if(S[i]==S[i+1]) {
            flag = false;
        }
    }

    if (flag==true) {
        printf("Unique\n");
    }
    else {
        printf("Not Unique\n");
    }

    return 0;

}
