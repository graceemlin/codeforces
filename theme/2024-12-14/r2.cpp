#include <bits/stdc++.h>
#include <cmath>

using namespace std;

bool dfs(vector<int>& ary, int start_index, int end_index) {
  if (start_index == end_index) {
    return true;
  } else if (start_index > end_index) {
    return false;
  }
  
  return dfs(ary, start_index + ary[start_index], end_index);
}

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int t;
  cin >> t;

  vector<int> elements(n);
  for (int i = 1; i < n; ++i) {
    cin >> elements[i];
  }

  cout << (dfs(elements, 1, t) ? "YES" : "NO") << endl;
}
