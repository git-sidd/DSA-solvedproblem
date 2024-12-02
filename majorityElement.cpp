#include <bits/stdc++.h>
using namespace std;

void majorityElement(int arr[], int n)
{
    int maj = n / 3; // Threshold for majority element
    unordered_map<int, int> mymap; // To count the occurrences of each element
    vector<int> result; // To store majority elements

    // Count occurrences of each element
    for (int i = 0; i < n; i++)
    {
        mymap[arr[i]]++;
    }

    // Check which elements occur at least n/3 times
    for (const auto &pair : mymap)
    {
        if (pair.second > maj)
        {
            result.push_back(pair.first);
        }
    }

    // Sort the result vector for output in ascending order
    sort(result.begin(), result.end());

    // Print the result
    if (result.empty())
    {
        cout << "No majority elements found." << endl;
    }
    else
    {
        for (int i : result)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Handle edge case where n <= 0
    if (n <= 0)
    {
        cout << "Invalid input. Array size must be greater than 0." << endl;
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << i << "th element: ";
        cin >> arr[i];
    }

    majorityElement(arr, n);
    return 0;
}
