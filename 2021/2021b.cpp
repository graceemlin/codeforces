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
    long long x;
    cin >> x;

    vector<long long> elements(n);
    for (int i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    bool no_ops = x >= n;
    bool can_start = *min_element(elements.begin(), elements.end()) == 0;
    
    if (no_ops && can_start) {
      long long curr_nat = 0;
      long long last = -1;
      
      sort(elements.begin(), elements.end());      
      
      for (long long element: elements) {
	if (curr_nat == element && last != element) {
	  last = curr_nat++;
	} else if (curr_nat == element && last == element) {
	  last = element;
	} else if (curr_nat != element && last != element) {
	  break;
	}
      }
      
      cout << curr_nat << endl;
      continue;
    } else if (no_ops) {
      cout << 0 << endl;
      continue;
    }

    map<long long, vector<long long>> buckets;
    for (long long element: elements) {
      buckets[element % x].push_back(element);
    }

    long long global_min = n;
    for (long long i = 0; i < x; ++i) {
      long long bucket_min = LONG_LONG_MAX;
      long long curr_val = i;
      long long bucket_size = buckets[i].size();
      
      if (bucket_size == 0) {
	global_min = min(global_min, i);
	continue;
      }
      
      sort(buckets[i].begin(), buckets[i].end());
      
      for (long long j = 0; j < bucket_size; ++j) {
	if (buckets[i][j] > curr_val) {
	  bucket_min = curr_val;
	  break;
	}	
	curr_val += x;
	bucket_min = curr_val;
      }
      
      global_min = min(bucket_min, global_min);
    }
    
    cout << global_min << endl;
  }
}
