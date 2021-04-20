#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll ans = 0,j, n;
    vector<int> arr(0);
    arr.clear();
    cin >> n;
    for (ll i = 0; i < n - 1; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    for (j = 0; j < n - 1; j++)
    {
        if (arr[j] == (j + 1))
        {
            continue;
        }
        else break;
    }
    cout << j+1;

    return 0;
}