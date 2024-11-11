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
    int a;
    cin >> a;
    int b;
    cin >> b;

    string s;
    cin >> s;

    int curr_x = 0;
    int curr_y = 0;

    bool meets_red_queen = false;
    for (int i = 0; i < n * 100; ++i) {
      if (s[i % n] == 'N') {
	++curr_y;
      } else if (s[i % n] == 'E') {
	++curr_x;
      } else if (s[i % n] == 'S') {
	--curr_y;
      } else if (s[i % n] == 'W') {
	--curr_x;
      }

      if (curr_x == a && curr_y == b) {
	meets_red_queen = true;
	break;
      }
    }
    
    cout << (meets_red_queen ? "YES" : "NO") << endl;
  }
}
