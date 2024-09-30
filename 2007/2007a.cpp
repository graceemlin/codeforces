#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;

  while (t--) {
    int l;
    cin >> l;
    int r;
    cin >> r;

    int coprime_triples = 0;
    for (int i = l; i + 1 < r; ++i) {
      bool triple_found = (i & 1)
	&& (!((i + 1) & 1))
	&& ((i + 2) & 1);
      
      if (triple_found) {
	++coprime_triples;
	i += 2;
      }
    }
    
    cout << coprime_triples << endl;
  }
}
