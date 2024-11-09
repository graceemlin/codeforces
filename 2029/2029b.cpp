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
    string s;
    cin >> s;
    string r;
    cin >> r;

    int zeroes = 0;
    int ones = 0;
    
    for (char c : s) {
      if (c == '0') {
	++zeroes;
      } else {
	++ones;
      }
    }
    
    bool win_condition = true;
    for (char c : r) {
      if (!ones || !zeroes) {
	win_condition = false;
	break;
      }
      
      if (c == '0') {
	--ones;
      } else {
	--zeroes;
      }
    }
    
    cout << (win_condition ? "YES" : "NO") << endl;
  }
}
