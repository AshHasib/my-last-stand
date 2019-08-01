#include<bits/stdc++.h>
using namespace std;

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


int main()
{
    int N;
    scanf("%d",&N);
    string S[N+1];
    for(int i=0;i<N;i++) {
        cin>>S[i];
    }

    string sum=S[0];

    for(int i=1;i<N;i++) {
        sum= add(sum, S[i]);
    }

    cout<<sum<<endl;

    return 0;

}
