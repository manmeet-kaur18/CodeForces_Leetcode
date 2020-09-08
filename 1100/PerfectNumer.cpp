#include <bits/stdc++.h>
using namespace std;

int sumOfDigits (int n)
{
    int sum = 0;

    while (n)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main ()
{
    int k,i,cnt=0;

    cin>>k;

    for (i=19; i<11000000; i+=9)
    {
        if (sumOfDigits(i) == 10)
        {
            ++cnt;

            if (cnt == k)
            {
                cout<<i;
                return 0;
            }
        }
    }
    return 0;
}
