#include <bits/stdc++.h>

using namespace std;
#define arp unsigned long long int
#define kaj_start int main()
#define kaj_shesh return 0

arp power(arp x, arp y, arp p) {
  arp res = 1; // Initialize result

  // Update x if it is more than or
  // equal to p
  x = x % p;

  while (y > 0) {
    // If y is odd, multiply x with the result
    if (y & 1)
      res = (res * x) % p;

    // y must be even now
    y = y >> 1; // y = y/2
    x = (x * x) % p;
  }
  return res;
}

kaj_start {
  arp t;
  cin >> t;
  while (t--) {

    arp k;
    cin >> k;

    k = power(2, (k - 1), 1000000007) * 10;

    k = k % 1000000007;

    cout << k << endl;
  }
  kaj_shesh;
}
