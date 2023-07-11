#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 4, 5};
    int n = 5;
    int hash[n + 1] = {0};

    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            cout << "Ans is " << i << endl;
        }
    }
    return 0;
}