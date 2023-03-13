#include <bits/stdc++.h>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    vector<int> rotatedArr(n);

    // Calculate the index to start copying elements from arr to rotatedArr
    int startIdx = d % n;

    // Copy elements from arr to rotatedArr
    for (int i = 0; i < n; i++) {
        rotatedArr[i] = arr[startIdx];
        startIdx = (startIdx + 1) % n;
    }

    return rotatedArr;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> rotatedArr = rotateLeft(d, arr);

    for (int i = 0; i < n; i++) {
        cout << rotatedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
