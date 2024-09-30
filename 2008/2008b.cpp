#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>

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

    if (sqrt(n) != (int)sqrt(n)) {
      cout << "NO" << endl;
      continue;
    } else {
      int row = (int)sqrt(n);
      bool square_possible = true;

      for (int first = 0; first < row; ++first) {
	if (s[first] != '1') {
	  square_possible = false;
	  break;
	}
      }
      
      for (int last = n - 1; last >= (n - row); --last) {
	if (s[last] != '1') {
	  square_possible = false;
	  break;
	}
      }
      
      for (int i = 1; i < row - 1; ++i) {
	if (s[(i * row)] != '1' || s[(i * row) + row - 1] != '1') {
	  square_possible = false;
	  break;
	}
	for (int j = 1; j < row - 1; ++j) {
	  if (s[(i * row) + j] != '0') {
	    square_possible = false;
	    break;
	  }
	}
      }

      if (square_possible) {
	cout << "YES" << endl;
      } else {
	cout << "NO" << endl;
      }
    }
  }
}
