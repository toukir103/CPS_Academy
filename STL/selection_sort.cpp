#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    optimize();

    // Input array
    int myArray[] = {64, 34, 25, 12, 22, 11, 90};

    // Number of elements in the array
    int n = sizeof(myArray) / sizeof(myArray[0]);

    // Traverse through all array elements
    for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in the unsorted part of the array
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (myArray[j] < myArray[min_index]) {
                min_index = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        std::swap(myArray[i], myArray[min_index]);
    }

    // Print the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << myArray[i] << " ";
    }

    return 0;
}
