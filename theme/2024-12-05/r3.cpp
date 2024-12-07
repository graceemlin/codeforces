#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    string result = "";
    stack<int> upper;
    stack<int> lower;
    for (int i = 0; i < s.size(); ++i) {
      if (s[i] == 'B') {
        if (upper.size() > 0) {
          const int recent_upper = upper.top();
          upper.pop();
          result[recent_upper] = '#';
        }
        result += '#';
      } else if (s[i] == 'b') {
        if (lower.size() > 0) {
          const int recent_lower = lower.top();
          lower.pop();
          result[recent_lower] = '#';
        }
        result += '#';
      } else if ((s[i] >= 'A') && (s[i] <= 'Z')) {
        upper.push(i);
        result += s[i];
      } else if ((s[i] >= 'a') && (s[i] <= 'z')) {
        lower.push(i);
        result += s[i];
      }
    }

    result.erase(remove(result.begin(), result.end(), '#'), result.end());

    cout << result << endl;
  }
}
