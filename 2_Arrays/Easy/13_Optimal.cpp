#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1, 1, 2, 3, 3, 4, 4, 5, 5};
    int temp = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        temp = temp ^ arr[i];
    }
    cout << "Ans is " << temp << endl;
    return 0;
}