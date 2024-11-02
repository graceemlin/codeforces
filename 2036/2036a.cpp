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

    vector<int> notes(n);
    for (int i = 0; i < n; ++i) {
      cin >> notes[i];
    }

    bool perfect = true;
    for (int i = 0; i < n - 1; ++i) {
      int interval = abs(notes[i] - notes[i + 1]);
      if (interval != 7 && interval != 5) {
	perfect = false;
	break;
      }
    }

    cout << (perfect ? "YES" : "NO") << endl; 
  }
}
