#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int64_t n;
    cin >> n;

    string s;
    cin >> s;
    
    int64_t underscore{};
    int64_t dash{};

    for (const char goblin_rune: s) {
      if (goblin_rune == '-') {
	++dash;
      } else {
	++underscore;
      }
    }
    
    if (dash < 2 || underscore == 0) {
      cout << 0 << endl;
      continue;
    }

    int64_t left = dash / 2;
    int64_t right = dash - left;
    int64_t result = left * right * underscore;

    cout << result << endl;
  }
}
