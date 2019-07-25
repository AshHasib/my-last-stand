#include<bits/stdc++.h>
using namespace std;


unsigned long long getNumA(string s) {
    return count(s.begin(), s.end(), 'a');
}

int main()
{
    string str;
    cin>>str;

    unsigned long long counter=0;

    unsigned long long len= str.size();

    unsigned long long N;
    scanf("%llu",&N);

    if(N%len==0)
    {
        printf("%llu\n", getNumA(str)*(N/len));
    }

    else
    {
        counter=getNumA(str)*(N/len);
        unsigned long long d= N%len;
        for(unsigned long long i=0;i<d;i++)
        {
            if(str[i]=='a')
            {
                counter++;
            }
        }
        printf("%llu",counter);
    }




    return 0;

}
