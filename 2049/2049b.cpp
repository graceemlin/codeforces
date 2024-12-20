#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (s[0] == 's') {
      s[0] = '.';
    }

    if (s.back() == 'p') {
      s.back() = '.';
    }

    if (s.find("p") == string::npos || s.find("s") == string::npos) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
