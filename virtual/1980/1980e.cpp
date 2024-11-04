#include <bits/stdc++.h>

using namespace std;

bool horizontal_check(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2);
bool vertical_check(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2);

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
    
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
	cin >> a[i][j];
      }
    }

    vector<vector<int>> b(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
	cin >> b[i][j];
      }
    }
    
    bool same_positions = horizontal_check(a, b) && vertical_check(a, b);
    
    cout << (same_positions ? "YES" : "NO") << endl;
  }
}

bool horizontal_check(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2) {
  map<set<int>, int> rows;
  int n = mat1.size();
  int m = mat1[0].size();

  for (int i = 0; i < n; ++i) {
    set<int> row;
    for (int j = 0; j < m; ++j) {
      row.insert(mat1[i][j]);
    }
    rows[row]++;
  }
  
  for (int i = 0; i < n; ++i) {
    set<int> row;
    for (int j = 0; j < m; ++j) {
      row.insert(mat2[i][j]);
    }
    if (!rows[row]--) {
      return false;
    }
  }
  
  return true;
}

bool vertical_check(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2) {
  map<set<int>, int> columns;
  int n = mat1.size();
  int m = mat1[0].size();

  for (int j = 0; j < m; ++j) {
    set<int> col;
    for (int i = 0; i < n; ++i) {
      col.insert(mat1[i][j]);
    }
    columns[col]++;
  }
  
  for (int j = 0; j < m; ++j) {
    set<int> col;
    for (int i = 0; i < n; ++i) {
      col.insert(mat2[i][j]);
    }
    if (!columns[col]--) {
	return false;
    }
  }
  
  return true;
}
