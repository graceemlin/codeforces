#include <bits/stdc++.h>

using namespace std;

void traverse (const vector<vector<int>>& mat, vector<int>& ary, int r, int l, int b, int t);
  
int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<vector<int>> matrix(n);
    for (int i = 0; i < n; ++i) {
      string row;
      cin >> row;
      for (int j = 0; j < m; ++j) {
	matrix[i].push_back(row[j] - '0');
      }
    }
	
    int right = m - 1;
    int left = 0;
    int bottom = n - 1;
    int top = 0;
    
    int answer = 0;
    
    int scanned = 0;
    while (scanned < n * m) {
      vector<int> layer;
      traverse(matrix, layer, right, left, bottom, top);
      
      int size = layer.size();
      for (int x = 0; x < size; ++x) {
	if (layer[x] == 1 &&
	    layer[(x + 1) % size] == 5 &&
	    layer[(x + 2) % size] == 4 &&
	    layer[(x + 3) % size] == 3) {
	  ++answer;
	}
      }
      
      scanned += 2 * (right - left) + 2 * (bottom - top);
      
      right--;
      left++;
      bottom--;
      top++;
    }

    cout << answer << endl;
  }
}


void traverse(const vector<vector<int>>& mat, vector<int>& ary, int r, int l, int b, int t) {
  for (int i = l; i <= r; ++i) {
    ary.push_back(mat[t][i]);
  }
  
  for (int i = t + 1; i <= b; ++i) {
    ary.push_back(mat[i][r]);
  }
  
  for (int i = r - 1; i >= l; --i) {
    ary.push_back(mat[b][i]);
  }
  
  for (int i = b - 1; i > t; --i) {
    ary.push_back(mat[i][l]);
  }  
}
