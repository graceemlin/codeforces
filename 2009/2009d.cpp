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

    vector<long long> zero_array(n + 1, 0);
    vector<long long> one_array(n + 1, 0);
    
    long long one_count = 0;
    long long zero_count = 0;
    
    while (n--) {
      long long x;
      cin >> x;
      long long y;
      cin >> y;
      
      if (y == 0) {
	++zero_array[x];
	++zero_count;
      }
      if (y == 1) {
	++one_array[x];
	++one_count;
      }
    }

    long long triangle_count = 0;
    
    for (int i = 0; i < zero_array.size(); ++i) {
      if (one_array[i] && zero_array[i]) {
	triangle_count += zero_count - 1;
      }

      bool zero_in_bounds = i > 0 && i < (zero_array.size() - 1);
      bool zero_sandwich = zero_in_bounds
	&& zero_array[i]
	&& one_array[i + 1]
	&& one_array[i - 1];
      
      if (zero_sandwich) {
	++triangle_count;
      }
    }
    
    for (int i = 0; i < one_array.size(); ++i) {
      if (one_array[i] && zero_array[i]) {
	triangle_count += one_count - 1;
      }
      
      bool one_in_bounds = i > 0 && i < (one_array.size() - 1);
      bool one_sandwich = one_in_bounds
	&& one_array[i]
	&& zero_array[i + 1]
	&& zero_array[i - 1];
      
      if (one_sandwich) {
	++triangle_count;
      }
    }
    
    cout << triangle_count << endl;
  }
}
