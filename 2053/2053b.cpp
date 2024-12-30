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

    map<int, int> filled;
    vector<pair<int, int>> impressions(n);
    for (int i = 0; i < n; ++i) {
      int left;
      cin >> left;
      int right;
      cin >> right;
      
      impressions[i] = {left, right};
      if (left == right) {
	++filled[left];
      }
    }

    map<int, int> root;
    for (auto& [index, freq] : filled) {
      root[index] = index;
    }
    
    for (auto& [index, freq] : filled) {
      if (filled[index] && filled[index + 1]) {
	root[index + 1] = root[index];
      }
    }
    
    string result = "";
    for (int i = 0; i < n; ++i) {
      if (impressions[i].first == impressions[i].second) {
	if (filled[impressions[i].first] > 1) {
	  result += '0';
	} else {
	  result += '1';
	}
      } else {
	bool found =
	  !root[impressions[i].first] ||
	  !root[impressions[i].second] ||
	  root[impressions[i].first] != root[impressions[i].second];
	if (found) {
	  result += '1';
	} else {
	  result += '0';
	}
      }
    }

    cout << result << endl;    
  }
}
