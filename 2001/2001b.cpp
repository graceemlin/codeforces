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
    
    if (!(n & 1)) {
      cout << -1 << endl;
      continue;
    } else {
      for (int j = 1; j < n; j += 2) {
	cout << j << ' ';
      }
      cout << n;
      for (int k = n - 1; k > 0; k -= 2) {
	cout << ' ' << k;
      }
      cout << endl;
    }
  }
}

//two pointers
//write number : if ai is untouched min positive not yet in set
//return* return pointer to original
//move pointer: increment pointer (while in bounds)
//when is same?
//-1 -1
// 1 2
// -1 -1 
// 1 2 3
// 1 3 2
// 1 3 2
// 1 3 2 4

//two sequences ()
//1 3 4 2

