#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1, 1, 2, 3, 3, 4, 4, 5, 5};

    for (int i = 0; i < arr.size(); i++)
    {
        int num = arr[i];
        int counter = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] == num)
            {
                counter++;
            }
        }
        if (counter == 1)
        {
            cout << "Ans is " << num << endl;
        }
    }
}