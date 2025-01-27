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

    cout << count(s.begin(), s.end(), '1') << endl;
  }
}
