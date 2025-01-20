#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<vector<int>> deck(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
	cin >> deck[i][j];
      }
    }

    for (int i = 0; i < n; ++i) {
      sort(deck[i].begin(), deck[i].end());
      deck[i].push_back(i);
    }

    sort(deck.begin(), deck.end());

    int current_value{};
    bool possible = true;
    for (int j = 0; j < m; ++j) {
      for (int i = 0; i < n; ++i) {
	if (deck[i][j] == current_value) {
	  ++current_value;
	} else {
	  possible = false;
	  break;
	}
      } 
    }

    if (!possible) {
      cout << -1 << endl;
      continue;
    }
    
    vector<int> ordering(n);
    for (int i = 0; i < n; ++i) {
      ordering[i] = deck[i].back() + 1;
    }
    
    for (int player: ordering) {
      cout << player << ' ';
    }
    cout << endl;
  }
}
