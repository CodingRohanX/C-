#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool arraySortedOrNot(const vector<int>& arr) {
    size_t n = arr.size();
    if (n == 1 || n == 0) {
        return true;
    }
    return arr[0] <= arr[1] && arraySortedOrNot(vector<int>(arr.begin() + 1, arr.end()));
}

int main() {
    int t;
    cin >> t;
    for (int k = 0; k < t; ++k) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& item : a) {
            cin >> item;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i + 2; j < n; ++j) {
                if (a[i] > a[j]) {
                    swap(a[i], a[j]);
                }
            }
        }
        if (arraySortedOrNot(a)) {
            cout << "yes" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}