#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    map<int, int> freq;
    for (int i = 0; i < n; ++i) {
      freq[elements[i]]++;
    }

    set<int> contains(elements.begin(), elements.end());

    vector<int> result;
    for (int i = 0; i < n; ++i) {
      if (contains.count(i)) {
        result.push_back(i);
        --freq[i];
      } else {
        break;
      }
    }

    for (int element: result) {
      cout << element << ' ';
    }

    for (const auto& [key, value]: freq) {
      for (int i = 0; i < value; ++i) {
        cout << key << ' ';
      }
    }
    cout << endl;
  }
}
