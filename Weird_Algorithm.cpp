#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2 == 0) // if even
        {
            n /= 2;
            cout << n << " ";
        }
        else if (n % 2 != 0) // if odd
        {
            n = (n * 3) + 1;
            cout << n << " ";
        }
        else
        {
            assert(false); //This will not work
        }
    }

    return 0;
}