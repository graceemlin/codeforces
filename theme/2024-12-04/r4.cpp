#include <bits/stdc++.h>
#include <cstdint>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> seen;

    int64_t sum{};
    for (char c: s) {
      seen.insert(c);
      sum += seen.size();
    }

    cout << sum << endl;
  }
}
