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
		vector<int> v(n), freq;
		for(int i = 0 ; i < n; i++) {
			cin >> v[i];
		}

		set<int> s, s1;
		for(int i : v) {
			s.insert(i);
		}

		for(auto it = s.begin(); it != s.end(); it++) {
			freq.push_back(count(v.begin(), v.end(), *it));
		}
		

		for(int i : freq) {
			s1.insert(i);
		}

		map<int, int> m;
		for(auto it = s1.begin(); it != s1.end(); it++) {
			m.insert(pair<int, int>( count(freq.begin(), freq.end(), *it), *it));
		}

		int ans = 0;
		for(map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
			// cout << it->first << " " << it->second << endl;
			ans = max(ans, it->first);
		}

		cout << m[ans] << endl;
    }

    kaj_shesh;
}
