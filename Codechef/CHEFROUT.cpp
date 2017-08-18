#include <iostream>
using namespace std;

int main() {
  int t;
  char prv = 'A', now;
  int flag = -1;
  cin >> t;
  cin.get();
  while (t--) {
    char e = cin.get();
    if ( e <= prv) {
      flag = 1;
    }

  }
  return 0;
}
