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
    long long r;
    cin >> r;
    
    vector<long long> families(n);
    for (long long i = 0; i < n; ++i) {
      cin >> families[i];
    }

    long long total_people = accumulate(families.begin(), families.end(), 0);
    long long happy_people = 0;
    long long empty_seats = r * 2;
    
    for (long long family_members : families) {
      bool is_odd_family = family_members % 2;
      empty_seats -= family_members;
      happy_people += family_members - is_odd_family;      
    }
    
    happy_people += empty_seats;
    happy_people = min(happy_people, total_people);
    
    cout << happy_people << endl;
  }
}
