#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char S[100000];
    scanf(" %[^\n]", &S);
    printf("%s\n", &S);
    int len = strlen(S);

    for (int i=0;i<len;i++) {
        if(S[i]==' ') {
            for(int j=len-1;j>=i+1;j--) {
                S[j+2]=S[j];
            }
            S[i]='%';
            S[i+1]='2';
            S[i+2]='0';
            len+=2;
        }
    }

    printf("%s\n", S);

    return 0;

}
