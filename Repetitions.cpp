#include <bits/stdc++.h>
using namespace std;

int main()
{
    string dna;
    vector<int> arr; //making array for storing frequency of each character
    cin >> dna;

    static int count = 1;
    for (int i = 0; i != dna.size(); i++)
    {
        if (dna[i] == dna[i + 1])
            count++;
        else if (dna[i] != dna[i + 1])
        {
            arr.push_back(count);
            count = 1;
        }
    }
    cout << *max_element(arr.begin(), arr.end());
    return 0;
}