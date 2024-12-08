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
    int k;
    cin >> k;

    vector<int> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    int safe_index{};
    bool is_safe = false;
    for (int i = 0; i < n; ++i) {
      is_safe = true;
      for (int j = 0; j < n; ++j) {
        if (i != j) {
         is_safe &= abs(elements[i] - elements[j]) % k != 0;
        }
      }
      
      if (is_safe) {
        safe_index = i;
        break;
      }
    }
    
    if (is_safe) {
      cout << "YES" << endl;
      cout << safe_index + 1 << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
