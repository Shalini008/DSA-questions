#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> arr(n);
    int lastAnswer = 0;
    vector<int> answers;

    for (int i = 0; i < q; i++) {
        int type, x, y;
        cin >> type >> x >> y;

        if (type == 1) {
            arr[(x ^ lastAnswer) % n].push_back(y);
        } else {
            int idx = (x ^ lastAnswer) % n;
            int size = arr[idx].size();
            lastAnswer = arr[idx][y % size];
            answers.push_back(lastAnswer);
        }
    }

    for (int i = 0; i < answers.size(); i++) {
        cout << answers[i] << endl;
    }

    return 0;
}
