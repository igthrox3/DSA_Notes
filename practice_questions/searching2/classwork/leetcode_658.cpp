#include <bits/stdc++.h>
using namespace std;

int main() {
    // Hardcoded test case (exactly like your LeetCode input)
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    int x = 3;

    // ---------- YOUR EXACT LOGIC (unchanged) ----------
    int low = 0;
    int high = arr.size() - 1;
    int idx = -1;
    int flag = 0;

    vector<int> v;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            idx = mid;
            flag = 1;
            break;
        } else if (arr[mid] > x) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    int inserted = 0;

    if (flag == 0) {
        idx = high;
    }
    if (high == -1) {
        idx = 0;
    }

    if (flag == 0) {
        v.push_back(arr[idx]);
        inserted++;
    }

    int to_serach = 1;
    while (inserted < k) {
        if (idx - to_serach >= 0) {
            v.push_back(arr[idx - to_serach]);
            inserted++;
        }
        if (v.size() <= k && idx + to_serach < arr.size()) {
            v.push_back(arr[idx + to_serach]);
            inserted++;
        }
        to_serach++;
    }

    sort(v.begin(), v.end());

    // ---------- Print result ----------
    cout << "Input: arr = {1,2,3,4,5}, k = 4, x = 3" << endl;
    cout << "Output: ";
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}