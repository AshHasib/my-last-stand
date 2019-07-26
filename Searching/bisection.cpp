#include<bits/stdc++.h>
using namespace std;


double mySqrt(double num)
{
    double low=0;
    double high= num;
    double mid;
    while((high-low)>0.0001)
    {
        mid= (low+high)/2;

        if(mid*mid>num)
        {
            high=mid;
        }
        else
        {
            low=mid;
        }
    }

    return mid;
}


int main()
{
    double num;

    printf("Enter a number: ");
    scanf("%lf",&num);


    printf("SQRT of the number is: %.7lf\n", mySqrt(num));

    return 0;

}
