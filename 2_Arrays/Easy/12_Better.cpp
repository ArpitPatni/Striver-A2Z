#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1, 1, 2, 3, 3, 4, 4, 5, 5};

    int maxi = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int hash[maxi + 1] = {0};
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (hash[arr[i]] == 1)
        {
            cout << "Ans is " << arr[i] << endl;
        }
    }
    return 0;
}