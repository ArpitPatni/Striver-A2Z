#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    vector<int> arr{1, 2, 4, 5};
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Missing number is " << i << endl;
            ;
        }
    }
    return 0;
}