/**
* Basic template
* Author : AshHasib
*/

#include<bits/stdc++.h>
#include <boost/algorithm/string.hpp>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int a,b;
    vector<string> notes;
    vector<string> magazines;

    scanf("%d%d", &a, &b);

    for(int i=0; i< a; i++) {
        string s;
        cin>>s;
        boost::split(magazines, s, boost::is_any_of(" "));
        magazines.push_back(s);
    }

    for(int i=0; i< b; i++) {
        string s;
        cin>>s;
        boost::split(notes, s, boost::is_any_of(" "));
        notes.push_back(s);
    }

    int l1= magazines.size();
    int l2= notes.size();

    sort(magazines.begin(), magazines.end());
    sort(notes.begin(), notes.end());

    int i=0,j=0;
    int counter=0;
    while(i<l1 && j< l2) {
        if(magazines[i] == notes[j]) {
            j++;
            i++;
            counter++;
        }
    }

    if(counter==l2) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }


    return 0;
}

