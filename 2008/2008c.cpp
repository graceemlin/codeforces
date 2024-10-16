#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;

  while (t--) {
    long long l;
    cin >> l;
    long long r;
    cin >> r;
    
    long long increment = 0;
    long long max_length = l <= r;
    
    while (l < r) {
      if ((l + (1 + increment)) > r) {
	break;
      } else {
	l += ++increment;
	++max_length;
      }
    }
    
    cout << max_length << endl;
  }
}
