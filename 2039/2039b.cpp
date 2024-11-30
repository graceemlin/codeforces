#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;
    
    int n = s.size();
    
    if (n == 1) {
      cout << -1 << endl;
      continue;
    }

    if (n == 2 && (s[0] != s[1])) {
      cout << -1 << endl;
      continue;
    }

    string result = "";
    bool pair_found = false;
    for (int i = 0; i < n - 1; ++i) {
      if (s[i] == s[i + 1]) {
        result += s.substr(i, 2);
        pair_found = true;
        break;
      }
    }

    if (pair_found) {
      cout << result << endl;
      continue;
    }

    bool triple_found = false;
    for (int i = 0; i < n - 2; ++i) {
      if (s[i] != s[i + 1] && (s[i + 2] != s[i] && s[i + 2] != s[i + 1])) {
        result += s.substr(i, 3);
        triple_found = true;
        break;
      }
    }

    if (triple_found) {
      cout << result << endl;
      continue;
    }

    cout << -1 << endl;
  }
}
