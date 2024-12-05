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
    int m;
    cin >> m;

    vector<string> strings(n);
    for (int i = 0; i < n; ++i) {
      cin >> strings[i];
    }

    int max_words{};
    int line_length{};
    for (string word : strings) {
      if (line_length + word.size() > m) {
        break;
      } else {
        line_length += word.size();
        ++max_words;
      }
    }

    cout << max_words << endl;
  }
}
