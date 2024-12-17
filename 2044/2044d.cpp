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

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    vector<int> temp(n);
    iota(temp.begin(), temp.end(), 1); 
    set<int> not_contains(temp.begin(), temp.end());
    for (int i = 0; i < n; ++i) {
      not_contains.erase(a[i]);
    }

    vector<int> b(n);
    set<int> seen;
    for (int i = 0; i < n; ++i) {
      if (!seen.insert(a[i]).second) {
        b[i] = *not_contains.rbegin();
        not_contains.erase(*not_contains.rbegin());
      } else {
        b[i] = a[i];
      }
    }

    for (int element: b) {
      cout << element << ' ';
    }
    cout << endl;
  }
}
