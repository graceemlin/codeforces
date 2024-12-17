#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    string a;
    cin >> a;

    reverse(a.begin(), a.end());
    
    for (int i = 0; i < a.size(); ++i) {
      if (a[i] == 'q') {
        a[i] = 'p';
      } else if (a[i] == 'p') {
        a[i] = 'q';
      }
    }

    cout << a << endl;
  }
}
