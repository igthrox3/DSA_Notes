#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 6, 7, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == mid + 5)
            low = mid + 1;
        else
            high = mid -1;
    }

    cout << arr[low] << endl;   // duplicate
    return 0;
}