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

    vector<int> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }
    
    int c_score = *max_element(elements.begin(), elements.end());
    int b_score = *min_element(elements.begin(), elements.end());
    
    int result = (c_score - b_score) * (n - 1);
    
    cout << result << endl;
  }
}
