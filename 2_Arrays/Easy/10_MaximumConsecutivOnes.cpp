#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 0, 0, 1, 1, 1, 0, 0, 1};
    int maxi = 0;
    int counter = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            counter++;
            maxi = max(counter, maxi);
        }
        else
        {
            counter = 0;
        }
    }
    cout << "Ans is " << maxi << endl;
    return 0;
}