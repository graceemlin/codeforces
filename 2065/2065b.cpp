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

    int answer = s.size();
    for (int i = 0; i < s.size() - 1; ++i) {
      if (s[i] == s[i + 1]) {
	answer = 1;
	break;
      }
    }

    cout << answer << endl;    
  }
}
