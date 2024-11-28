#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(int arr[], int l, int m, int r) {
        vector<int> temp;  // Temporary vector for merging
        int left = l;
        int right = m + 1;

        // Merge the two subarrays
        while (left <= m && right <= r) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                ++left;
            } else {
                temp.push_back(arr[right]);
                ++right;
            }
        }

        // Append remaining elements of the left subarray
        while (left <= m) {
            temp.push_back(arr[left]);
            ++left;
        }

        // Append remaining elements of the right subarray
        while (right <= r) {
            temp.push_back(arr[right]);
            ++right;
        }

        // Copy back the sorted elements to the original array
        for (int i = l; i <= r; i++) {
            arr[i] = temp[i - l];
        }
    }

    void mergeSort(int arr[], int l, int r) {
        // Base condition: if only one element or invalid range
        if (l >= r) return;

        int mid = l + (r - l) / 2;  // Avoid potential overflow

        // Sort left and right halves
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        // Merge the sorted halves
        merge(arr, l, mid, r);
    }
};

int main() {
    int n;
    cin >> n;  // Input size
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Input elements
    }

    Solution ob;
    ob.mergeSort(arr, 0, n - 1);  // Sort the array

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
