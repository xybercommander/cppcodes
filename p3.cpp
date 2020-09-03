#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp> // int128_t, int256_t, etc
// using namespace boost::multiprecision;
using namespace std;
#define kaj_start int main()
#define kaj_shesh return 0
#define ll long long

const ll M = 1000000007;

string toBinary(int n)
{
    string r;
    while(n != 0){
        r = (n % 2 == 0 ? "0" : "1" ) + r;
        n /= 2;
    }
    return r;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

kaj_start{ // DIS DA MAIN FUNC
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
		int n;
		cin >> n;
		vector<ll> v;
		for(ll i = 0; i < n; i++) {
			int x;
			cin >> x;
			v.push_back(x);
		}
		v.push_back(INT_MAX);

		ll zeroes = 0, ones = 0;
		for(ll i : v) {
			if(i == 0) {
				zeroes++;
			} else {
				ones++;
			}
		}

		if(zeroes == 0) {
			cout << "No" << endl;
		} else if(zeroes == 1) {
			cout << "Yes" << endl;
		} else {

			map<ll, ll> m;
			vector<ll> diff;
			int startPos = -1, endPos = -1;
			for(ll i = 0; i < n; i++) {
				if(v[i] == 0 && startPos == -1) {
					startPos = i;
				}

				if(v[i] == 0 && ((v[i + 1] == 1) || (v[i + 1] == INT_MAX))) {
					endPos = i;
					m.insert(pair<ll, ll>(startPos, endPos));
					startPos = -1;
					endPos = -1;
				}
			}

			for(map<ll, ll>::iterator it = m.begin(); it != m.end(); it++) {
				// cout << it->first << " " << it->second << endl;
				diff.push_back((it->second + 1) - it->first);
			}

			sort(diff.begin(), diff.end(), greater<int>());
			// for(int i : diff) {
			// 	cout << i << " ";
			// }

			if(count(diff.begin(), diff.end(), diff[0]) == 1) {
				if(diff[0] % 2 == 0) {
					cout << "No" << endl;
				} else {
					cout << "Yes" << endl;
				}
			} else {
				cout << "No" << endl;
			}

		}
    }

    kaj_shesh;
}
