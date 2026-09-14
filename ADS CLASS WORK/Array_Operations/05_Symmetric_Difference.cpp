#include <bits/stdc++.h>
using namespace std;

vector<int> symmetricDifference(vector<int> arr1, vector<int> arr2, int n, int m) {
    int i = 0, j = 0;
    vector<int> result;

    while (i<n && j<m) {
        if (i > 0 && arr1[i] == arr1[i - 1]) {
            i++;
            continue;
        }

        if (j > 0 && arr2[j] == arr2[j - 1]) {
            j++;
            continue;
        }

        if (arr1[i] < arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            result.push_back(arr2[j]);
            j++;
        }
        else {
            i++;
            j++;
        }
    }

    while (i < n) {
        if (i == 0 || arr1[i] != arr1[i - 1]) {
            result.push_back(arr1[i]);
        }
        i++;
    }

    while (j < m) {
        if (j == 0 || arr2[j] != arr2[j - 1]) {
            result.push_back(arr2[j]);
        }
        j++;
    }

    return result;
}

int main() {
    int n, m;

    cout << "Size of Array1: ";
    cin >> n;

    cout << "Size of Array2: ";
    cin >> m;

    vector<int> arr1(n);
    vector<int> arr2(m);

    cout << "Enter elements of Array1: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of Array2: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> result = symmetricDifference(arr1, arr2, n, m);

    cout << "Symmetric Difference: ";

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}