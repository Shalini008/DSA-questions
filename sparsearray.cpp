#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> freqMap;
    for (string str : stringList) {
        freqMap[str]++;
    }
    vector<int> result;
    for (string query : queries) {
        result.push_back(freqMap[query]);
    }
    return result;
}

int main() {
    int n, q;
    cin >> n;
    vector<string> stringList(n);
    for (int i = 0; i < n; i++) {
        cin >> stringList[i];
    }
    cin >> q;
    vector<string> queries(q);
    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }
    vector<int> result = matchingStrings(stringList, queries);
    for (int i : result) {
        cout << i << "\n";
    }
    return 0;
}
