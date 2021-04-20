#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans = 0, temp = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        temp = 0;
        if (arr[i+1] < arr[i])
        {
            temp = abs(arr[i] - arr[i + 1]);
            // arr[i+1] = arr[i];
            swap(arr[i + 1], arr[i]);
            ans = ans + temp;
        }
        else
            continue;
    }
    cout << ans << endl;

    return 0;
}