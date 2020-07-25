#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define kaj_start int main()
#define kaj_shesh return 0

int add_digits(ll int n) {
  ll int sum = 0;

  if (n == 0) {
    return 0;
  } else {
    sum = n % 10 + add_digits(n / 10);
    return sum;
  }
}

string func(ll int n) {

  ll int sum = add_digits(n);

  ostringstream s;
  s << n;
  string result = s.str();
  ll int i;

  for (i = 0; i <= 9; i++) {
    if ((sum + i) % 10 == 0)
      break;
  }
  ostringstream m;
  m << i;
  string value_i = m.str();
  result = result + value_i;
  //ll int ans = n*10 + i;
  return result;

}

kaj_start {
  ll int t;
  cin >> t;
  while (t--) {

    ll int n;
    cin >> n;

    cout << func(n) << endl;
  }
  kaj_shesh;
}
