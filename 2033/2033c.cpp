#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    vector<long long> elements(n);
    for (long long i = 0; i < n; ++i) {
      cin >> elements[i];
    }

    bool even_elements = n % 2 == 0;
    
    long long starting_index = n / 2;
    long long last_l_index = n / 2 - even_elements;
    long long last_r_index = n / 2;

    for (long long i = 0; starting_index + i < n; ++i) {
      long long curr_l_index = starting_index - i - even_elements;
      long long curr_r_index = starting_index + i;      

      if (elements[curr_l_index] == elements[last_l_index] || elements[curr_r_index] == elements[last_r_index]) {
        swap(elements[curr_l_index], elements[curr_r_index]);	  
      }
      
      last_l_index = curr_l_index;
      last_r_index = curr_r_index;
    }
    
    long long disturbances = 0;
    for (long long i = 0; i < n - 1; ++i) {
      if (elements[i] == elements[i + 1]) {
        ++disturbances;
      }
    }

    cout << disturbances << endl;
  }
}
