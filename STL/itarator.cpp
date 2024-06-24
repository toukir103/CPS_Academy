#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n';

int main()
{
    optimize();
    int myArray[] = {64, 34, 25, 12, 22, 11, 90};

    int n = sizeof(myArray);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (myArray[j] > myArray[j + 1])
            {
                swap(myArray[j], myArray[j + 1]);
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << myArray[i] << " ";
    }

    return 0;
}
