#include <bits/stdc++.h>
#include <set>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  
  while (t--) {
    int n;
    cin >> n;

    vector<int> a_elements(n, 0);
    for (int i = 0; i < n; ++i) {
      cin >> a_elements[i];
    }

    int m;
    cin >> m;
    
    vector<string> b_elements(m);    
    for (int i = 0; i < m; ++i) {
      cin >> b_elements[i];
    }
    
    for (int i = 0; i < m; ++i) {
      int length = b_elements[i].size();
      bool isomorphic = true;
      
      if (length != n) {
	cout << "NO" << endl;
	isomorphic = false;
	continue;
      } else {
	unordered_map<int, int> isomorphic_a, isomorphic_b;
	
	isomorphic_a[a_elements[0]] = 0;
	isomorphic_b[b_elements[i][0]] = 0;

	for (int j = 1; j < length; ++j) {
	  if (!isomorphic_a.count(a_elements[j])) {
	    isomorphic_a[a_elements[j]] = -1;
	  }
	  
	  if (!isomorphic_b.count(b_elements[i][j])) {
	    isomorphic_b[b_elements[i][j]] = -1;
	  }
	  
	  if (isomorphic_a[a_elements[j]] != isomorphic_b[b_elements[i][j]]) {
	    cout << "NO" << endl;
	    isomorphic = false;
	    break;
	  }
	  
	  isomorphic_a[a_elements[j]] = j;
	  isomorphic_b[b_elements[i][j]] = j;
	}
	
	if (isomorphic) {
	  cout << "YES" << endl;
	}
      }
    }
  }
}

//isomorphy time :3
