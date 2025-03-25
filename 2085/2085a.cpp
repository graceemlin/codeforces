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
    string r;
    cin >> r;

    if (n == 0) {
      cout << "NO" << endl;
      continue;
    }
    
    string reversed_string = r;
    reverse(reversed_string.begin(), reversed_string.end());

    bool possible = true;
    bool found = false;
    for (int i = 0; i < r.size(); ++i) {
      possible &= ((r[i] - 'a') <= (reversed_string[i] - 'a'));
      if ((r[i] - 'a') < (reversed_string[i] - 'a')) {
	found = true;
	break;
      }
    }
    
    possible &= found;
    
    if (k == 0) {
      cout << (possible ? "YES" : "NO") << endl;
      continue;
    }

    set<char> exists(r.begin(), r.end());
    possible |= exists.size() > 1;
    
    cout << (possible ? "YES" : "NO") << endl;
  }
}
