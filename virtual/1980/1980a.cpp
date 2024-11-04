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

    string a;
    cin >> a;

    int insertions = 0;
    
    map<char, int> mp;
    for (int i = 0; i < a.size(); ++i) {
      mp[a[i]]++;
    }

    for (int i = 0; i < 7; ++i) {
      if (mp[i + 'A'] < m) {
	insertions += m - mp[i + 'A'];
      }
    }

    cout << insertions << endl;
  }
}
