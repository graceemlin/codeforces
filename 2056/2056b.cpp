#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<string> adjacency_matrix(n);
    for (int i = 0; i < n; ++i) {
      cin >> adjacency_matrix[i];
    }

    vector<int> permutation(n, 0);
    for (int i = 0; i < n; ++i) {
      int index{};
      for (int j = 0; j < n; ++j) {
	if (j > i && adjacency_matrix[i][j] == '0') {
	  ++index;
	} else if (j < i && adjacency_matrix[i][j] == '1') {
	  ++index;
	}
      }
      
      permutation[index] = i + 1;
    }
    
    for (auto element: permutation) {
      cout << element << " ";
    }
    cout << endl;

  }
}
