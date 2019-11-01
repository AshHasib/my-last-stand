#include<bits/stdc++.h>
using namespace std;


int main() {

    int T;

    for (int c=1;c<=T;c++) {
        string s1, s2;
        map<char, int> freq;

        cin>>s1>>s2;

        for(int i=0;i<s1.size();i++) {
            freq[s1[i]]=1;
            cout<<freq[s1[i]];
        }
    }

    return 0;
}
