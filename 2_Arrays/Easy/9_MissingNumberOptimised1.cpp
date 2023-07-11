#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    vector<int> arr{1, 2, 4, 5};
    int firstSum = n * (n + 1) / 2;
    int secondSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        secondSum = secondSum + arr[i];
    }

    cout << "Number number is " << firstSum - secondSum << endl;
    return 0;
}