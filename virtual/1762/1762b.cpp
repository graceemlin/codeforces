#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;
    
    vector<long long> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }
    
    unordered_map<long long, list<long long>> value_to_index;
    
    for (int i = 0; i < n; ++i) {
      value_to_index[elements[i]].push_back(i);
    }

    sort(elements.begin(), elements.end());
    
    cout << n << endl;

    long long target = 1;
    for (int i = 0; i < n; ++i) {
      list<long long>& indices = value_to_index.find(elements[i])->second;
      long long index = *indices.begin();
      indices.erase(indices.begin());
      
      while (elements[i] > target) {
	target *= 2;
      }
      
      long long x = target - elements[i];
      
      cout << index + 1 << ' ' << x << endl;
    }
  }
}
